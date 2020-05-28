// 시저암호
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer(s.size(), ' ');
    for(int i=0; i<s.size(); i++) {
        int num = (int)s[i];
        if(num >= 65 && num <=90) {
            if(num + n > 90)
                answer[i] = (char)((int)s[i] + n - 26);
            else 
                answer[i] = (char)((int)s[i] + n);
        }
        else if(num >= 97 && num <= 122) {
            if(num+n>122) 
                answer[i] = (char)((int)s[i] + n - 26);
            else 
                answer[i] = (char)((int)s[i] + n);
        }   
    }
    return answer;
}