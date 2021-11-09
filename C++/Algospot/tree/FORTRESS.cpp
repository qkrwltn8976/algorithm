/**
 * FORTRESS
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct wall
{
    int x;
    int y;
    int r;
};

vector<wall> fortress;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int C; // 테스트케이스
    cin >> C;
    while (C--)
    {
        int N; // 성벽의 수
        cin >> N;
        fortress.resize(N);
        for (int i = 0; i < N; i++)
            cin >> fortress[i].x >> fortress[i].y >> fortress[i].r;
        
    }
    return 0;
}

/**
 * 트리 => 성벽은 닿거나 겹치지 않는다는 조건, 성벽의 포함 관계는 트리구조
 * 
 * # 트리에서 가장 긴 경로 찾기 : 트리 최장 경로의 양 끝 노드가 항상 루트 혹은 잎 노드
 * 
*/