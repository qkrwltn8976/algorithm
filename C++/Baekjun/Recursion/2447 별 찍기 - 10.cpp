/**
 * 별 찍기 - 10
*/

#include <iostream>
using namespace std;

void printStar(int i, int j, int n)
{
    if ((i / n) % 3 == 1 && (j / n) % 3 == 1)
    {
        cout << " ";
    }
    else
    {
        if (n / 3 == 0)
        {
            cout << "*";
        }
        else
        {
            printStar(i, j, n / 3);
        }
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printStar(i, j, n);
        }
        cout << "\n";
    }
    return 0;
}