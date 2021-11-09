/**
 * 부분수열의 합
*/

#include <iostream>
#include <vector>
using namespace std;

int n, s, cnt = 0;
vector<int> arr;
void searchSum(int begin, int sum)
{
    sum += arr[begin];

    if (begin >= n) // base case
    {
        return;
    }

    if (sum == s)
        cnt++;

    searchSum(begin + 1, sum); // 계속해서 합산하는 경우
    searchSum(begin + 1, sum - arr[begin]); // 새로운 부분 수열 계산
}

int main()
{

    cin >> n >> s;

    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }

    searchSum(0, 0);

    cout << cnt << endl;
    return 0;
}