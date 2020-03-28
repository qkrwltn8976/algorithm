/**
 * N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
*/

#include <cstdio>

int main() {
    int n, num;
    scanf("%d", &n);
    int min=1000000, max=0;
    while(n--) {
        scanf("%d", &num);
        if(num<min) min = num;
        if(num>max) max = num;
    }
    printf("%d %d\n", min, max);
    return 0;
}