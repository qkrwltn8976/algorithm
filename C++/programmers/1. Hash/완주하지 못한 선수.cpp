/**
 * 완주하지 못한 선수
 * 수많은 마라톤 선수들이 마라톤에 참여, 단 한명의 선수를 제외하고 모든 선수가 마라톤 완주
 * participant: 마라톤에 참여한 선수들의 이름
 * completion: 완주한 선수들의 이름이 담긴 배열
 * 
 * O(N)
*/

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> d;
    
    for(auto& i:participant) d[i]++;
    for(auto& i:completion) d[i]--;
    for(auto& i:d) {
        if(i.second > 0) {
            answer = i.first;
            break;
        }
    }
    return answer;
}
