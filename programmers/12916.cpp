// 문자열 내 p와 y 개수, 대소문자 구분하지 않음

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_cnt=0, y_cnt=0;
    for(int i=0; i<s.length(); i++) {
        if(tolower(s[i]) == 'p') p_cnt++;
        if(tolower(s[i]) == 'y') y_cnt++;
    }
    if(p_cnt == y_cnt)
        answer = true;
    else
        answer = false;

    return answer;
}