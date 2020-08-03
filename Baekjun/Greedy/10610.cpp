/**
 * 30
 * 30이란 수를 존경하기 때문에, 그는 길거리에서 찾은 양수 N에 포함된 숫자들을 섞어 30의 배수가 되는 가장 큰 수를 만들고 싶어한다.
 * 3321
 * 3의 배수는 모든 자리수를 더했을 때 3으로 나누어떨어져야 하고 10의 배수는 끝자리에 0 포함
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isMultipleThree(int n) {
    int sum = 0;
    while(n) {
        sum += n%10;
        n = n/10;
    }

    if(sum % 3==0)
        return true;
    else 
        return false;
}

bool isMultipleTen(string tmp) {
    if(tmp.find("0")!=-1)
        return true;
    else 
        return false;

}

int main() {
    int n=0;
    string tmp="";
    cin >> n;
    tmp = to_string(n);
    if(isMultipleThree(n) && isMultipleTen(tmp)) {
        sort(tmp.begin(), tmp.end(), greater<char>());
    } else {
        tmp = "-1";
    }

    cout << tmp << endl;

    return 0;
}