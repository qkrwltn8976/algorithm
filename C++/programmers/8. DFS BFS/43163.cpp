#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void DFS(string prev, int idx, int cnt, string target, vector<string> words, vector<int> ans)
{
    if(prev==target)
        ans.push_back(cnt);
    
    int diff = 0;
    
    for(int i=0; i<prev.length(); i++)
    {
        if(prev[i]!=words[idx][i]) diff++;
    }
    if(diff == 1)
        DFS(words[idx], idx++, cnt++, target, words, ans);
    return;   
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    vector<int> ans;
    DFS(begin, 0, 0, target, words, ans);
    sort(ans.begin(), ans.end());
    answer = ans.front();
    return answer;
}