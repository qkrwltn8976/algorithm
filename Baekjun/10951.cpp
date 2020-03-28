/**
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 
 * 첫째 줄에 테스트 케이스의 개수 T가 주어지지 않는다.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    while(cin >> a >> b) {
        cout << a+b << endl;
    }
    return 0;
}

/**
 * 입력이 몇 개인지 주어지지 않은 경우
 * while(cin >> a >> b)
 * 
*/