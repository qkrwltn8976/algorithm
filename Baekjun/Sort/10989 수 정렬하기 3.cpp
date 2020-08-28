/**
 * 수 정렬하기 3
*/
#include <iostream>
#define MAX_SIZE 10000

using namespace std;

int main()
{
    int n, tmp;
    int arr[MAX_SIZE+1] = {0}; // 초기화 필수
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        arr[tmp]++;
    }

    for (int i = 1; i <= MAX_SIZE; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

/**
 * vector sort 사용할 경우 메모리 초과 
 * merge sort 메모리 초과
 * 
 * 배열에 담으면 메모리 초과 발생
 * ==> 역발상 : 배열의 키와 인덱스 전환
*/