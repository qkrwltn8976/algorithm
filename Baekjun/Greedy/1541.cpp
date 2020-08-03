/**
 * 잃어버린 괄호
 * 길이가 최대 50인 식에 괄호를 적절히 쳐서 이 식의 값을 최소로 만드는 프로그램을 작성하시오. 
 * 
 * 뺄셈 이후마다 괄호를 치면 최소가 된다.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, tmp = "";
    int sum = 0;
    bool minus = false;
    cin >> s;

    for (int i = 0; i <= s.size(); i++)
    {
        // 연산자인 경우
        if (s[i] == '-' || s[i] == '+' || s[i] == '\0')
        {
            // cout << tmp << " ";
            if (minus)
            {
                sum -= stoi(tmp);
            }

            else
            {
                sum += stoi(tmp);
            }

            tmp = "";
            if (s[i] == '-')
                minus = true;
            
            continue;
            // 해당 조건만 skip하고, 다음 조건으로 계속 돌아감 
        }

        // 피연산자인 경우
        tmp += s[i];
    }

    cout << sum << endl;
}