/**
 * 부분수열의 합
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
vector<int> tot;
int n;

void searchCombo(int index, int sum)
{
    sum += arr[index];

    if (index >= n) // base case
        return;
    tot.push_back(sum);
    searchCombo(index + 1, sum);
    searchCombo(index + 1, sum - arr[index]);
}

int main()
{
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }

    searchCombo(0, 0);

    sort(tot.begin(), tot.end());                         // 정렬
    tot.erase(unique(tot.begin(), tot.end()), tot.end()); // 중복 제거

    int answer = 10000;
    int i;
    for (i = 0; i < tot.size(); i++)
    {
        if (tot[i] != i + 1)
        {
            answer = i + 1;
            break;
        }
    }
    i -= 1;

    if (answer == 10000)
        answer = tot[i] + 1;
    cout << answer << endl;
}