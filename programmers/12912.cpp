// 두 정수 사이의 합
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int m, n;
    if(a<b) {
        m = a;
        n = b;
    } else {
        m = b;
        n = a;
    }
    for(int i=m; i<=n; i++) {
        answer += i;
    }
    return answer;
}