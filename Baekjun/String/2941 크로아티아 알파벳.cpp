/**
 * 크로아티아 알파벳
*/

#include <iostream>
#include <string>
#define SIZE 8
using namespace std;

string cro[SIZE] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int main()
{
    cin.tie(0);
    cout.tie(0);

    string s;

    cin >> s;

    int cnt = 0;

    for (int i = 0; i < SIZE; i++)
    {
        size_t found = s.find(cro[i]);

        for (; found != string::npos; found = s.find(cro[i])) // 동일한 단어가 여러번 존재할 경우에 대한 처리, 더 이상 문장에 단어가 없을 때까지 반복
            s.replace(found, cro[i].length(), "*");
    }
    
    cout << s.length() << "\n";

    return 0;
}


/**
 * 찾은 문자를 삭제할 경우 삭제된 문자 앞과 뒤가 합쳐지면서 이상한 값이 도출되므로 erase 대신 replace 사용
 * 찾은 문자를 특수문자로 대치
*/