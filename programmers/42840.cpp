// 모의고사
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> m1 = {1, 2, 3, 4, 5};
    vector<int> m2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> m3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> answer;
    int cnt1=0, cnt2=0, cnt3=0;
    
    for(int i=0; i<answers.size(); i++) {
        if(answers[i]==m1[i%m1.size()])
            cnt1++;
        if(answers[i]==m2[i%m2.size()])
            cnt2++;
        if(answers[i]==m3[i%m3.size()])
            cnt3++;
    }
    
    int max = (cnt1 > cnt2) ? (cnt1 > cnt3 ? cnt1 : cnt2) : (cnt2 > cnt3 ? cnt2 : cnt3);
    if(max == cnt1)
        answer.push_back(1);
    if(max == cnt2)
        answer.push_back(2);
    if(max == cnt3)
        answer.push_back(3);
    
    
    return answer;
}