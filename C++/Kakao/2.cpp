#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> orders, vector<int> course)
{
    vector<string> answer;
    vector<pair<int, int> > mix;
    vector<pair<int, string> > menu;

    for (int i = 0; i < orders.size(); i++)
    {
        if()
        for (int j = 0; j < orders[i].length(); j++)
            mix.push_back(make_pair(orders[i][j], 1));
        for (int )
    }

    sort(mix.begin(), mix.end());
    mix.erase(unique(mix.begin(), mix.end()), mix.end());

    for (int i = 0; i < mix.size(); i++)
    {
        cout << mix[i] << endl;
    }
    for (int i = 0; i < course.size(); i++)
    {
        int cnt = course.size();
        vector<char> tmp = mix;
        while(cnt--)
        {
            string s;
            s += tmp.
        }
    }

    return answer;
}

int main()
{
    vector<string> orders;
    orders.push_back("ABCFG");
    orders.push_back("AC");
    orders.push_back("CDE");
    orders.push_back("ACDE");
    orders.push_back("BCFG");
    orders.push_back("ACDEH");

    vector<int> course;
    course.push_back(2);
    course.push_back(3);
    course.push_back(4);

    solution(orders, course);

    return 0;
}