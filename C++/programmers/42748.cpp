// k번째 수
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(int i=0; i<commands.size(); i++) {
        vector<int> sub(array.begin()+(commands[i][0]-1), array.begin()+(commands[i][1]));
        sort(sub.begin(), sub.end());
        int pos = commands[i][2]-1;
        answer.push_back(sub[pos]);
    }
    return answer;
}