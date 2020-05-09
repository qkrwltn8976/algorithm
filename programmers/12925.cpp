// 문자열을 정수로 바꾸기

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    // int answer = 0;
    // string pos = s.substr(0, 1);
    // string n = "";
    // if(pos=="-") {
    //     n=s.substr(1, s.length()-1);
    //     answer = -stoi(n);
    // } else {
    //     n=s.substr(0, s.length());
    //     answer = stoi(n);
    // }
    answer = stoi(s);
    return answer;
}