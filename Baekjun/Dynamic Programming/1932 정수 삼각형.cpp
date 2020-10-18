/**
 * 정수 삼각형
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > tri;
vector<vector<int> > dp;
int T;
int answer = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    tri.resize(T);
    dp.resize(T);

    for (int i = 0; i < T; i++)
    {
        tri[i].resize(i + 1);
        dp[i].resize(i + 1);
        for (int j = 0; j <= i; j++)
        {
            cin >> tri[i][j];
        }
    }

    dp[0][0] = tri[0][0];
    for (int i = 1; i < T; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j] + tri[i][j];
            }
            else if (j == i)
            {
                dp[i][j] = dp[i - 1][j - 1] + tri[i][j];
            }
            else
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j];

            if (i == T - 1)
                answer = max(answer, dp[i][j]);
        }
    }

    cout << answer;
    return 0;
}

/**
 * 메모리 초과 : 배열이 아닌 값에 최대값 저장해 비교
 * 시간 초과 : 메모이제이션 방식(Dynamic Programming)
 *          최대값을 저장하고 있는 이차원 배열 사용
 * 틀렸습니다: j 양 끝 값일 경우 예외처리
*/