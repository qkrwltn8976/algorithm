/**
 * 숫자 카드 2
 * Upper bound & Lower bound
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> arr;

int main()
{
    scanf("%d", &n);
    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr.begin(), arr.end());

    scanf("%d", &m);

    int k;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &k);
        auto r = upper_bound(arr.begin(), arr.end(), k);
        auto l = lower_bound(arr.begin(), arr.end(), k);
        cout << r-l << " ";
    }

    return 0;
}

/**
 * lower_bound(): <algorithm>에 포함되어있는 함수로, n개의 데이터로 채워진 A[] 배열에서 비교기준(compare)에 따라서 lower_bound의 위치를 계산해 줍니다.
 * 찾고자 하는 값 이상이 처음 나타나는 위치
 * std::lower_bound(A, A+n, k, [compare])

 * upper_bound(): <algorithm>에 포함되어있는 함수로, n개의 데이터로 채우진 A[] 배열에서 비교기준(compare)에 따라서 Upper_bound의 위치를 계산해 준다.
 * 찾고자 하는 값보다 큰 값이 처음으로 나타나는 위치입니다.
 * std::upper_bound(A, A+n, k, [compare])
*/
