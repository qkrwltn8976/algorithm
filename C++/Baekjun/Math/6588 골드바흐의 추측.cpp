/**
 * 골드바흐의 추측
*/

#include <iostream>
#include <string>
#include <vector>

#define MAX 1000000
using namespace std;

bool isPrime[MAX] = {false};
vector<int> primes(MAX, 0);

void predict(int num)
{
    int b = num - 1, a;

    while (b > 0)
    {
        a = num - b;
        if (primes[a]==1 && primes[b]==1)
        {
            cout << num << " = " << a << " + " << b << "\n";
            return;
        }
        else
            b -= 2;
    }
    cout << "Goldbach's conjecture is wrong.\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;

    for (int i = 2; i <= MAX; i++)
    {
        if (!isPrime[i])
        {
            primes[i] = 1;
            for (int j = i; j <= MAX; j += i)
            {
                isPrime[j] = true;
            }
        }
    }

    while (cin >> n && n != 0)
    {
        predict(n);
    }
    return 0;
}

/**
 * 에라토스테네스의 체 사용
*/