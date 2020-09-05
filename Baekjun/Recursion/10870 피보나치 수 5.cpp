/**
 * 피보나치 수 5
*/

#include <iostream>

using namespace std;

int num;
void fibo(int i, int a, int b)
{
    if (i > 0)
    {
        i--;
        return fibo(i, b, a + b);
    }
    else
    {
        num = a;
        return;
    }
}

int main()
{
    int i;
    scanf("%d", &i);

    fibo(i, 0, 1);
    cout << num << endl;
    return 0;
}