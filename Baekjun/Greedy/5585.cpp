/**
 * 거스름돈
 * 언제나 거스름돈 개수가 가장 적게 잔돈을 준다.
*/

#include <iostream>
using namespace std;

const int NUM = 6;
int main() {
    int total, cnt=0;
    int coin[NUM] = {500, 100, 50, 10, 5, 1};
    cin >> total;
    total = 1000-total;

    for(int i=0; i<NUM; i++) {
        while (total >= coin[i]) {
            total -= coin[i];
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}