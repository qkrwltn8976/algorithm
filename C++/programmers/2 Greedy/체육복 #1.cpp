#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer=0;
    vector<int> uniform;
    for(int i=0; i<n+2; i++) uniform.push_back(1);
    for(int i=0; i<lost.size(); i++) uniform[lost[i]]--;
    for(int i=0; i<reserve.size(); i++) uniform[reserve[i]]++;
    for(int i=1; i<uniform.size()-1; i++) {
        if(uniform[i-1] == 0 && uniform[i] == 2) {
            uniform[i-1]++;
            uniform[i]--;
        } else if(uniform[i+1] == 0 && uniform[i] == 2) {
            uniform[i]--;
            uniform[i+1]++;
        }
    }
    for(int i=1; i<uniform.size()-1; i++) {
        if(uniform[i]>0)
            answer++;
    }
        
    return answer;
}