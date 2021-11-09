/**
 * 팩토리얼
 * 
 * 리그에 참여하는 팀의 수를 입력받고 리그에서의 경기 수를 구하라
*/
#include <iostream>
using namespace std;
int main() {
	int n, tot=0;
	cin >> n;
	
	for(int i=0; i<n; i++) 
		tot += i;
	
	cout << tot << endl;
	return 0;
}
