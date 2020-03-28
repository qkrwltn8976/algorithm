/**
 * 입력 받은 대로 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
using namespace std;

int main() {
    string text;
    while (getline(cin, text)) {
        cout << text << endl;
    }
    return 0;
}