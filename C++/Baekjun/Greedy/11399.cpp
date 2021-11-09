/** ATM 
 * 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 구하는 프로그램 
 * IN: 첫째 줄에 사람의 수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄에는 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어진다. (1 ≤ Pi ≤ 1,000)
 * OUT: 첫째 줄에 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 출력한다.
 *
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
