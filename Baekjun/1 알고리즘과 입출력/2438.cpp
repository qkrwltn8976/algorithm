/**
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
*/

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=n-i-1; j<n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}