#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// ...!@BaT#*..y.abcdefghijklm
string solution(string new_id)
{
    string answer = "";

    for (int i = 0; i < new_id.length(); i++)
    {
        if (new_id[i] >= 'A' && new_id[i] <= 'Z')
        {
            new_id[i] += 32;
        }

        if (!(new_id[i] >= 97 && new_id[i] <= 122) && !isdigit(new_id[i]) && (new_id[i] != '.') && (new_id[i] != '-') && new_id[i] != '_')
        {
            continue;
        }
        else
        {
            answer += new_id[i];
        }
    }

    size_t pos = answer.find('.');

    while (pos != string::npos)
    {
        while (answer[pos + 1] == '.')
        {
            answer.erase(answer.begin() + pos + 1);
        }

        if (pos == 0 || pos == answer.length())
        {
            answer.erase(answer.begin() + pos);
        }
        pos = answer.find('.', pos + 1);
    }

    if (answer.length() == 0)
    {
        answer = "a";
    }

    if (answer.length() >= 15)
    {
        answer = answer.substr(0, 15);
    }

    while (answer[answer.length() - 1] == '.')
    {
        answer = answer.substr(0, answer.length() - 1);
    }

    if (answer.length() <= 2)
    {
        while (answer.length() < 3)
        {
            answer += answer[answer.length() - 1];
        }
    }

    return answer;
}

int main()
{
    string s;
    cin >> s;

    cout << solution(s) << endl;

    return 0;
}