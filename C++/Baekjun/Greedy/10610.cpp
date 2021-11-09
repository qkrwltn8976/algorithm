/**
 * 30
 * 30이란 수를 존경하기 때문에, 그는 길거리에서 찾은 양수 N에 포함된 숫자들을 섞어 30의 배수가 되는 가장 큰 수를 만들고 싶어한다.
 * 3321
 * 3의 배수는 모든 자리수를 더했을 때 3으로 나누어떨어져야 하고 10의 배수는 끝자리에 0 포함
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main() {
    string N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N.length(); i++) {
        sum += N[i];
    }
    sort(N.begin(), N.end());
    if (N[0] == '0' && sum % 3 == 0) {
        reverse(N.begin(), N.end());
        cout << N;
    }
    else { cout << "-1"; }
}
