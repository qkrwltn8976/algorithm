// 서울에서 김서방 찾기

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int pos = 0;
    for(int i=0; i<seoul.size(); i++) {
        if(seoul[i] == "Kim") {
            pos = i;
        }
    }
    answer = "김서방은 " + to_string(pos) + "에 있다";
    return answer;
}

/**
 * int -> string 형변환
 * to_string()
 * 
 * 다른 사람 풀이
 * int pos=find(seoul.begin(),seoul.end(),"Kim")-seoul.begin();
 * vector의 find() 함수 사용
 * find(시작지점, 끝지점, 찾고자 하는 대상) - 시작지점
*/