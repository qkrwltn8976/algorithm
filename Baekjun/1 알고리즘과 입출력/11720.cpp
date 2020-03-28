/**
 * N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
 * 
 * 첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n=0, sum=0;
    cin >> n;

    int num;
    while(n--) {
        scanf("%1d", &num);
        sum += num;
    }
    
    cout << sum << endl;
    return 0;
}

/**
 * 한글자 입력을 받을 때에는 scanf("%1d",&x);를 사용한다.
*/