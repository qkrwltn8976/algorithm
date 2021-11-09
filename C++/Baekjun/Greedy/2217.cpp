/**
 * 로프
 * 로프들을 이용하여 들어올릴 수 있는 물체의 최대 중량을 구해내는 프로그램을 작성하시오
 * 
 * 로프 개수 * 선택 로프의 최소값
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100;
int main() {
    int n, in, max=0;
    vector<int> rope;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> in;
        rope.push_back(in);
    }

    sort(rope.begin(), rope.end());

    for(int i=0; i<n; i++) {
        if(max < (n-i)*rope[i])
            max = (n-i)*rope[i];
    }
    cout << max << endl;
    return 0;
}