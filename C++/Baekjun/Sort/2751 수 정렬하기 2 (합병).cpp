/**
 * 수 정렬하기 2 : 합병정렬
*/

#include <iostream>
#define MAX_SIZE 1000000

using namespace std;

int n;
int arr[MAX_SIZE];
int *tmp;

void merge(int left, int mid, int right)
{
    int i = left, j = mid + 1, k = left;

    while (i <= mid && j <= right)
    {
        // cout << "q="<< q << endl;
        // cout << arr[i] << "  " << arr[j]<<endl;
        if (arr[i] <= arr[j])
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];
    }
    while (i <= mid)
        tmp[k++] = arr[i++];
    while (j <= right)
        tmp[k++] = arr[j++];

    for (int i = left; i <= right; i++)
    {
        arr[i] = tmp[i];
    }
}

void mergeSort(int left, int right)
{
    int mid = 0;
    if (left < right)
    {
        mid = (left + right) / 2;
        mergeSort(left, mid);     // 전반부 정렬
        mergeSort(mid + 1, right); // 후반부 정렬
        merge(left, mid, right);      // 합병
    }
}

int main()
{
    scanf("%d", &n);
    tmp = new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergeSort(0, n-1);

    for (int i=0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}

/**
 * 합병정렬
 * 최악의 경우에도 O(nlogn)
 * 
 * c++ 표준 입출력 함수 사용 시
 * 시간초과 발생
 * => cin -> scanf , cout -> printf
*/
