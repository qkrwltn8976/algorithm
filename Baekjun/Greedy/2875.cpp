/**
 * 대회 or 인턴
 * 올해에도 N명의 여학생과 M명의 남학생이 팀원을 찾고 있다. 대회에 참여하려는 학생들 중 K명은 반드시 인턴쉽 프로그램에 참여해야 한다.
 * 여학생의 수 N, 남학생의 수 M, 인턴쉽에 참여해야하는 인원 K가 주어질 때 만들 수 있는 최대의 팀 수를 구하라
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, k, cnt=0;
    cin >> n >> m >> k;

    while (1)
    {
        if (n + m - 3 >= k && n >= 2 && m >= 1)
        {
            n -= 2;
            m -= 1;
            cnt++;
        } else
        {
            break;
        }
        

    }

    cout << cnt << endl;

    return 0;
}