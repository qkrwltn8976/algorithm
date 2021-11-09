/**
 * [교수님의 과제 폭탄]
 * 
 * 민수에게 N개의 과제와 각 과제의 시작날짜, 마감날짜가 주어질 때 모든 과제를 성공적으로 마칠 수 있을지 없을지 판별하는 프로그램을 작성하라
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	int n;
    cin >> n;

    string start, end;
    cin.ignore();
    while(n--) {
        cin >> start >> end;
    }
	return 0;
}