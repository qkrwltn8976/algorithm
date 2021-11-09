/**
 * 동전 0
 * 
*/

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1000;

int main() {
    int n, k, coin[MAX];
    cin >> n >> k;
    for(int i=0; i<n; i++) {
        cin >> coin[i];
    }

    sort(coin, coin+n);

    int cnt=0, tmp=k;
    for(int i=n-1; i>=0; i--) {
        while (tmp >= coin[i]) {
            tmp -= coin[i];
            cnt++;
        }
    }

    cout << cnt << endl;
}