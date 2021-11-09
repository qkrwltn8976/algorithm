// 가운데 글자 가져오기

#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(string s) {
    string answer = "";
    long long pos = s.length()%2;
    long long mid = s.length()/2;
    if(pos==1) {
        answer = s.substr(round(mid), 1);
    } else {
        answer = s.substr(floor(mid)-1, 2);
    }
    return answer;
}