/**
 * [앵무새 꼬꼬]
 * 모음만을 따라서 말하는 꼬꼬가 있다
 * 입력으로 여러 문장이 들어올 때, 각 문장에 대해 꼬꼬가 따라서 말해야 하는 문장을 출력하는 프로그램을 작성하라
 * 단, 알파벳 모음은 a, e, i, o, u 5개 이다
*/
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
 * -> 특정 문자열을 찾으면 문자열이 시작하는 위치 리턴
 * -> 문자열이 없으면 string::npos 리턴
 * 
 * 대문자 -> 소문자 변환
 * bitwise-or 연산자를 사용하여 아스키코드 + 32
 * ch | 32
 * 
 * string::npos
 * until the end of the string
*/