/**
 * 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/

#include <cstdio>
using namespace std;

int main() {
    int n, i;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d\n", i);
    }
}

/**
 * 시간초과
 * C++에서 흔하게 사용되는 입력 방법은 cin인데 이 cin이 다른 입력방법 (scanf, get)에 비해 상대적으로 느리다
*/
