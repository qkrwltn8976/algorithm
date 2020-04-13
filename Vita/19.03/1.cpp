#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string input;
    cin.ignore();

    while (n--)
    {
        getline(cin, input);
				string vowel;

        for (int i = 0; i < input.length(); i++)
        { 
            if(string("aeiou").find(input[i] | 32) != string::npos)
                vowel.push_back(input[i]);
        }
        if(vowel.empty())
            vowel = "???";
        cout << vowel << endl;
    }

    return 0;
}

/**
 * 한 줄을 통째로 입력받는 경우
 * std::getline
 * 
 * 문자열에서 특정 문자를 찾는 함수
 * find
 * 
 * 대문자 -> 소문자 변환
 * bitwise-or 연산자를 사용하여 아스키코드 + 32
 * ch | 32
 * 
 * string::npos
 * until the end of the string
*/