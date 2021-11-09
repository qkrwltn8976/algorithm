#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

vector<int> solution(int n)
{
    vector<int> answer;
    vector<pair<int, int> > sols;

    string s = to_string(n);
    int sum = 0;

    if (s.size() == 1)
    {
        answer.push_back(0);
        answer.push_back(n);
    }
    else
    {
        for (int idx = 1; idx < s.size(); idx++)
        {
            int cnt = 0;
            string str = s;
            int i = idx;
            while (str.size() > 1)
            {
                cout << str.size() << "===" << i << endl;
                if (str.size() == i)
                    i--;
                string str1 = str.substr(0, i);
                string str2 = str.substr(i, str.size() - i);
                if (str2[0] == '0')
                {
                    break;
                }

                cout << "[1]" << str.substr(0, i) << endl;
                cout << "[2]" << str.substr(i, str.size() - i) << endl;
                sum = stoi(str1) + stoi(str2);
                cout << sum << endl
                     << endl;
                str = to_string(sum);
                cnt++;
            }
            if (cnt != 0)
                sols.push_back(make_pair(cnt, sum));

            cout << cnt << "answer" << sum << endl;
        }
        sort(sols.begin(), sols.end(), compare);
        answer.push_back(sols[0].first);
        answer.push_back(sols[0].second);
    }

    cout << answer[0] << "," << answer[1] << endl;
    return answer;
}

int main()
{
    int n = 10007;
    solution(n);
    return 0;
}


#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

vector<int> solution(int n)
{
    vector<int> answer;
    vector<pair<int, int> > sols;

    string s = to_string(n);
    int sum = 0;

    if (s.size() == 1)
    {
        answer.push_back(0);
        answer.push_back(n);
    }
    else
    {
        for (int idx = 1; idx < s.size(); idx++)
        {
            int cnt = 0;
            string str = s;
            int i = idx;
            while (str.size() > 1)
            {
                if (str.size() == i)
                    i--;
                string str1 = str.substr(0, i);
                string str2 = str.substr(i, str.size() - i);
                if (str2[0] == '0')
                {
                    break;
                }

        
                sum = stoi(str1) + stoi(str2);
        
                str = to_string(sum);
                cnt++;
            }
            if (cnt != 0)
                sols.push_back(make_pair(cnt, sum));
        }
        sort(sols.begin(), sols.end(), compare);
        answer.push_back(sols[0].first);
        answer.push_back(sols[0].second);
    }

    return answer;
}
