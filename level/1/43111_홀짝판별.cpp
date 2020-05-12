/**
 * 홀짝 판별
 * 
 * 정수를 입력받고 훌짝을 판별하라
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if(n%2==0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
	
	return 0;
}