/**
 * 합이 0인 네 정수
*/

#include <iostream>
#include <algorithm>
#include <vector>
#define MAX_SIZE 4000
using namespace std;

int a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE], d[MAX_SIZE];
vector<int> ab, cd;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];

        // hash[a+b+c+d]++;
    }

    ab.resize(n * n);
    cd.resize(n * n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ab[i * n + j] = a[i] + b[j];
            cd[i * n + j] = c[i] + d[j];
        }
    }

    sort(cd.begin(), cd.end());
    int cnt = 0;
    for (int i = 0; i < n * n; i++)
    {
        
        auto lo = lower_bound(cd.begin(), cd.end(), -ab[i]);
        if (*lo + ab[i] == 0)
        {
            // cout << "ab= "
            //  << " " << ab[i] << endl;
            cnt++;
            // cout << "---" << *lo << "--" << endl;
        }
        // cout << lo - cd.begin() << endl;
    } 
    cout << cnt << endl;

    return 0;
}

/**
 * 배열을 두개씩 묶자
 * a+b // c+d
 * 
 * 1. 해시 테이블 삽입
    "AB"의 원소들을 해시테이블에 넣으면서, 값을 카운트한다.
    해싱 충돌이 발생한다면 다른 비어있는 칸을 찾는다.
 * 해시 테이블 추출
    -"CD"의 원소들을 해시 테이블에서 찾는다.
    -CD가 해시 테이블에 존재한다면, AB의 원소중 +CD가 있다는 것이다.

답은 맞는데 왜 틀렸다하는지 모르겠음..
*/