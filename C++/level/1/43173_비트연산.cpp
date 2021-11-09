/**
 * 비트연산 기본
 * 
 * 첫 줄에 a >> b 결과
 * 두번째 줄에 a << b 결과 출력
*/

#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	
	int r1 = a >> b;
	int r2 = a << b;
	
	cout << r1 << endl;
	cout << r2 << endl;
	
	return 0;
}