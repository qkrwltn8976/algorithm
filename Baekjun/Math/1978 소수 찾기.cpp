/**
 * 소수 찾기
*/

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    int cnt = 0, i = num;
    while (i>0)
    {
        if (num % i == 0)
            cnt++;
        i--;
        if (cnt > 2) {
            break;
        }

    }
    if(cnt==2)
        return true;
    else 
        return false;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n, cnt = 0;

    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        cnt += isPrime(num);
    }

    cout << cnt;
    
    return 0;
}