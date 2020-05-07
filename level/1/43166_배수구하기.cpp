/**
 * 배수 구하기
 * 
 * N 이하의 자연수 중 3과 5의 배수의 합을 구하라
*/

#include <iostream>
using namespace std;
int main() {
	int n, sum=0;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		if(i%3==0 || i%5==0) {
				sum += i;
		}
	}
	
	cout << sum << endl;
}