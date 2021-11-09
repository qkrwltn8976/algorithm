/**
 * 체스판 다시 칠하기
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n, m;

    cin >> n >> m;

    vector<char> tmp(m);
    vector<vector<char> > chess(n, tmp);

    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            chess[i][j] = s[j];
        }
    }

    for (int i = 0; i <= n - 8; i++)
    {
        for (int j = 0; j <= m - 8; j++)
        {
            int cnt = 0;
            for (int p = i; p < i+8; p++)
            {
                for (int q = j; q < j+8; q++)
                {
                    if (((p + q) % 2 == (i + j) % 2))
                    {
                        if (chess[p][q] != chess[i][j])
                            cnt++;
                    }
                    else
                    {
                        if (chess[p][q] == chess[i][j])
                            cnt++;
                    }
                }
            }

            cnt = min(cnt, 64-cnt); // 교체해야할 문자가 더 많을 경우 시작문자를 잘못 설정, 조건 추가하지 않을 경우 오류
            vec.push_back(cnt);
        }
    }

    sort(vec.begin(), vec.end());

    cout << vec.front() << "\n";

    return 0;
}