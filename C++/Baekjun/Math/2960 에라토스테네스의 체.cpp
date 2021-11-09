/**
 * 에라토스테네스의 체
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, cnt = 0, answer;
    cin >> n >> k;

    vector<int> arr(1001,0);
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i) // 배수 제거하는 과정
        {
            if (arr[j] == 0)
            {
                cnt++;
                arr[j] = 1;     
            }

            if (cnt == k)
            {
                answer = j;
                break;
            }
        }
        if (cnt == k)
            break;
    }

    cout << answer << "\n";
}
