/**
 * 덩치
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int> > arr(n);
    vector<int> rank(n, 1);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second)
                rank[i]++;
        }
    }

    for(int i=0; i<n; i++)
        cout << rank[i] << " ";

    return 0;
}