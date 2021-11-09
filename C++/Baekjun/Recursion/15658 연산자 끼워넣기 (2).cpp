/**
 * 연산자 끼워넣기 (2)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_SIZE 11

using namespace std;

int n;
int arr[MAX_SIZE];
int op[4];
vector<int> results;

int operate(int a, int b, int op)
{
    switch (op)
    {
    case 0:
        return a + b;
    case 1:
        return a - b;
    case 2:
        return a * b;
    case 3:
        return a / b;
    }
    return 0;
}

void calculate(int index, int sum)
{
    if (index == n)
    {
        results.push_back(sum);
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (op[i] > 0)
        {
            int result = operate(sum, arr[index], i);
            op[i]--;
            calculate(index + 1, result);
            op[i]++;
        }
    }
    return;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cin >> op[i];
    }

    calculate(1, arr[0]);
    sort(results.begin(), results.end());
    cout << results[results.size() - 1] << endl;
    cout << results[0];
    return 0;
}