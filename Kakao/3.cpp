#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool correct(string token, string compare)
{
    if (token.compare(compare) == 0)
    {
        cout << "true";
        return true;
    }
    else
        return false;
}

vector<int> solution(vector<string> info, vector<string> query)
{
    vector<int> answer;
    vector<vector<string> > div1;
    vector<vector<string> > div2;
    answer.resize(query.size());
    // vector <>;
    for (int i = 0; i < query.size(); i++)
    {

        vector<string> tmp1;
        vector<string> tmp2;

        string delimiter = " ";
        int pos = 0;
        int pos2 = 0;
        string token;
        string compare;

        while ((pos = query[i].find(delimiter)) != string::npos)
        {

            pos = query[i].find(" and ");
            pos2 = info[i].find(delimiter);
            if (pos != string::npos)
            {
                tmp1.push_back(query[i].substr(0, pos));
                tmp2.push_back(info[i].substr(0, pos2));

                // // cout << token << endl;
                // cout << correct(token, compare) << endl;
                query[i].erase(0, pos + 5);
                info[i].erase(0, pos2 + 1);
            }
            else
            {
                while ((pos = query[i].find(delimiter)) != string::npos)
                {
                    tmp1.push_back(query[i].substr(0, pos));
                    tmp2.push_back(info[i].substr(0, pos2));
                    // infos.
                    // cout << token << endl;
                    // correct(token, compare);
                    tmp1.push_back(query[i].substr(pos + 1, query[i].length()));
                    query[i].erase(0, pos + 5);
                    info[i].erase(0, pos2 + 1);
                    tmp2.push_back(info[i].substr(0, pos2));
                }
            }
        }
        div1.push_back(tmp1);
        div2.push_back(tmp2);
    }

    for (int i = 0; i < div1.size(); i++)
    {
        for (int j = 0; j < div2.size(); j++)
        {
            cout << div1[i][j] << endl;
            int cnt = 0;
            for (int k = 0; k < div2.size()-1; k++)
            {
                cout << div2[j][k] << endl;
                
                if(div1[i][j] == div2[j][k]) {
                    cout << "keep" << endl;
                } else {
                    cout << "break" << endl;
                    break;
                }
                
                
            }
            cout << endl;
            // if(div1[i][j] == div2[j][k])
        }
        cout << "========" << endl;
    }
    return answer;
}

int main()
{
    vector<string> info;
    vector<string> query;
    info.push_back("java backend junior pizza 150");
    info.push_back("python frontend senior chicken 210");
    info.push_back("python frontend senior chicken 150");
    info.push_back("cpp backend senior pizza 260");
    info.push_back("java backend junior chicken 80");
    info.push_back("python backend senior chicken 50");

    query.push_back("java and backend and junior and pizza 100");
    query.push_back("python and frontend and senior and chicken 200");
    query.push_back("cpp and - and senior and pizza 250");
    query.push_back("- and backend and senior and - 150");
    query.push_back("- and - and - and - 150");

    solution(info, query);

    return 0;
}