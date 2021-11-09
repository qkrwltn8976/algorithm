// 숫자 중복 제거

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    // sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());


    return arr;
}