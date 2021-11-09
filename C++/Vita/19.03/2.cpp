/**
 * [인싸가 되고 싶은 민수]
 * 
 * 정수의 약수를 잘 맞추는 민수가 있다
 * 정수 a, b가 주어질 때 a와 b를 포함하여 사이에 있는 모든 정수의 약수를 썼을 때 1을 제외하고 가장 많이 등장하는 약수를 구하는 프로그램을 작성하라 
 * 단, 정답이 여러 개일 경우 가장 작은 약수를 출력한다
*/

#include <iostream>
using namespace std;

int leastFactor(int a) {
    for(int i=2; i*i<a; i++) {
        if (a%i==0)
            return i;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    if(a!=b) {
        cout << 2 << endl;
    } else {
        cout << leastFactor(a) << endl;
    }

    return 0;
}

/**
 * 탐욕 알고리즘 (greedy algorithm)
 * 매순간 최적이라고 생각하며 선택한 것이 최종적으로 또한 최선이길 바라는 알고리즘
 * 
 * 2 이상의 임의의 구간이 주어지면 그 구간안에 n의 배수보다 2의 배수가 항상 많거나 같다
 * 
 * 약수를 구할 때에는 특정 수의 제곱이 되기 전까지 반복문을 활용하여 구할 것
*/