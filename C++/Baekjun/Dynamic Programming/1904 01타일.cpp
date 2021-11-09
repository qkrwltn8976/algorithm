/**
 * 01타일
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long long tile[1000000] = {0, 1, 2};
    int n;
    scanf("%d", &n);

    for (int i = 3; i <= n; i++)
    {
        tile[i] = (tile[i - 1] + tile[i - 2]) % 15746;
    }

    printf("%lld\n", tile[n]);

    return 0;
}