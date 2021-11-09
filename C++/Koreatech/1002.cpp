/**
 * 너의 학번을 알려주마
 * 
 * 한기대의 학번은 총 10자리로, {학번}{학부/과 구분}{일련번호} 로 이루어져 있습니다. 예를 들여 2014136900 이면 14학번, 컴퓨터공학부, 가나다 순으로 900번째 학생임을 뜻 합니다.
학번이 입력으로 주어졌을 때, 몇 학번 인지를 출력하는 프로그램을 만들어 주세요.
*/
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    string *stud_num = new string[n];
    string s;
    for (int i=0; i<n; i++) {
        cin >> s;
        stud_num[i] = s.substr(2,2);
    }
    for (int i=0; i<n; i++) {
        cout << stud_num[i] << endl;
    }

    return 0;
}

/**
 * substr(a, b) : a는 시작 문자의 인덱스, b는 문자 개수
 * *