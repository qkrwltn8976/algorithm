/**
 * 보물
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;
vector<int> b;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    a.resize(T);
    b.resize(T);

    for (int i = 0; i < T; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < T; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
a.
    int sum = 0;
    for (int i = 0; i < T; i++)
    {
        sum += a[i]*b[i];
    }

    cout << sum << "\n";

    return 0;
}

/**
 * 하나는 오름차순 정렬
 * 하나는 내림차순 정렬
*/