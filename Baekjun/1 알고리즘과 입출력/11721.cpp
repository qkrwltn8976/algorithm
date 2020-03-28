/**
 * 알파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다.
 * 한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char c[100];

    while(scanf("%10s", c)==1) {
        cout << c << endl;
    }

    return 0;
}
// int main() {
//     char c[100];
//     cin >> c;

//     for(int i=0; i<strlen(c); i++) {
//         cout << c[i];
//         if((i+1)%10==0) cout << endl;
//     }
// }
/**
 * 입력받는 개수도 지정받아서 입력받을 수 있다
 * 
 * strlen(s)함수는 <cstring>에 존재
*/