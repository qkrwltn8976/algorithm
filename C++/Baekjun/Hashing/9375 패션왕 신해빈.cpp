/**
 * 패션왕 신해빈
*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        map<string, int> hash;

        while(n--)
        {
            string name, type;
            cin >> name >> type;
            // 이름은 중복 여부만 판단하고 사용되지 않음
            hash[type]++;
        }

        int answer = 1;
        for(auto i:hash)
        {
            answer *= (i.second+1);
        }

        cout << answer-1 << "\n";
        // 옷을 안 입는 경우 제외
    }


    return 0;
}

/**
 * 이항계수의 성질 활용
 * (a+1)*(b+1)*...*(z+1)
*/