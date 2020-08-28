/**
 * 팩토리얼
*/

#include <iostream>
using namespace std;

int Factorial(int n)
{
    if (n > 0) {
        return n * Factorial(n - 1);
    }
    return 1;
}

int main()
{
    int n, result;
    cin >> n;

    result = Factorial(n);

    cout << result << endl;
    return 0;
}