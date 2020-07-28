/** ATM 
 * 배열 정렬 할 때
 * algorithm의 sort(arr, arr+size)
*/
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1000;
int main() {
    int n, p[MAX];

    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> p[i];
    }

    sort(p, p+n); // 오름차순 정렬

    int time = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            time += p[j];
        }
    }

    cout << time << endl;
}
