/**
 * 카드
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define MAX_SIZE 100000

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main()
{
    int n;
    long long tmp;
    vector<long long> cards(MAX_SIZE, 0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        cards[tmp]++;
    }

    long long max = 0, max_index=0; 
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if(cards[i] > max) {
            max = cards[i];
            max_index = i;
        }
    }

    cout << max_index << " " << max <<"\n";
}