/**
 * Maximum Word Frequency
*/

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
bool compare(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}
int main()
{
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    map<string, int> hash;

    while (T--)
    {
        string s;
        cin >> s;
        hash[s]++;
    }
    
    // map을 vector로 이동
    vector<pair<string, int> > vec(hash.begin(), hash.end());
    // vector를 second 기준으로 정렬
    sort(vec.begin(), vec.end(), compare);

    cout << vec.back().first << " " << vec.back().second;
    return 0;
}

/**
 * map 정렬하기
 * 1) key로 정렬하는 경우
 * default : 오름차순
 * greater<string> : 내림차순
 * 
 * 2) value로 정렬하는 경우
 * map을 정렬하는 것이 아니고, map의 요소들을 value값을 기준으로 정렬
 * [1] map을 vector로 이동
 * [2] vector를 second 기준으로 정렬
*/