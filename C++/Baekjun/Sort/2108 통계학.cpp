/**
 * 통계학
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define MAX_SIZE 4000
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first > b.first;
}

int main()
{
    int n;
    double sum = 0;
    int avg = 0, mid = 0, sec = 0;

    vector<int> arr;
    vector<pair<int, int> > frq(MAX_SIZE * 2+1, make_pair(0, 0));
    // vector<pair<int, int> > frq;
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        frq[arr[i] + MAX_SIZE].first++;
        frq[arr[i] + MAX_SIZE].second = arr[i];
    }
 
    sort(arr.begin(), arr.end());
    sort(frq.begin(), frq.end(), compare);

    sec = (frq[0].first == frq[1].first) ? frq[1].second : frq[0].second;

    avg = roundf(sum / (double)n);
    mid = arr[n / 2];

    printf("%d\n", avg);
    printf("%d\n", mid);
    printf("%d\n", sec);
    printf("%d\n", arr.back() - arr.front());

    return 0;
}

/**
 * 평균 계산 시 (double) 명시적 형변환을 하지 않아 오류 발생
 * 
 * vector의 크기를 잘못 할당하여 4000이 제대로 저장되지 않음
*/