// 체육복  91.7%
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size(); // 전체 학생수 - 체육복을 잃어버린 학생 수
    for(int i=0; i<lost.size(); i++) {
        vector <int>::iterator it = find(reserve.begin(), reserve.end(), lost[i]-1);
        vector <int>::iterator it2 = find(reserve.begin(), reserve.end(), lost[i]+1);
        vector <int>::iterator it3 = find(reserve.begin(), reserve.end(), lost[i]); // 여벌 체육복을 가져온 학생이 체육복을 도난당했을 경우
        if(it3 != reserve.end()) {
            reserve.erase(it);
        } else if(it != reserve.end()) {
            answer++;
            reserve.erase(it);
        } else if (it2 != reserve.end()) {
            answer++;
            reserve.erase(it2);
        }
    }
    return answer;
}