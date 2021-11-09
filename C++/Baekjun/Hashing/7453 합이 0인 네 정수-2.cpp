#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);
	vector<int> d(n);
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	vector<int> first;
	vector<int> second;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			first.push_back(a[i]+b[j]);
			second.push_back(c[i]+d[j]);
		}
	}
	sort(second.begin(),second.end());
	long long int ans = 0;
	for(int num:first){
		auto range = equal_range(second.begin(),second.end(),-num);
		ans+=(range.second-range.first);
	}
	cout<<ans<<'\n';
	return 0;
}

/**
 * equal_range
 * : lower_bound(), upper_bound() 두 개의 값을 리턴
 * -lower_bound()와 upper_bound() 로 구성된 iterator를 pair형태로 반환하는 함수
 * upper_bound() - lower_bound() -> 찾으려는 값의 개수

*/