/**
 * 요세푸스 문제 0
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    queue<int> q;
    vector<int> vec;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while (!q.empty())
    {
        for (int i = 0; i < k-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        vec.push_back(q.front());
        q.pop();
    }

    cout << "<";

    for (int i = 0; i < vec.size()-1; i++)
    {
        cout << vec[i] << ", ";
    }

    cout << vec.back()<< ">\n";
    return 0;
}