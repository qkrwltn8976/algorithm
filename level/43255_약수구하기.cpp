/**
 * 약수 구하기
 * 
 * 양의 정수를 입력 받고 그 수의 약수를 모두 출력하는 프로그램을 만들어라.
*/

#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		if(n%i==0)
			cout << i << " ";
	}
}