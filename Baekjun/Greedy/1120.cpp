/**
 * 문자열
 * A의 길이가 B의 길이와 같아질 때 까지 
 * A의 앞에 아무 알파벳이나 추가한다.
 * A의 뒤에 아무 알파벳이나 추가한다.
 * A와 B의 길이가 같으면서, A와 B의 차이를 최소로 하는 프로그램을 작성하시오.
 * 
 * B의 길이를 A에 맞춘다
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string a, b;
    int diff, tmp=0;
    vector<int> cnt;
    cin >> a >> b;
    diff = b.length() - a.length();
    for(int i=0; i<=diff; i++) {
        for(int j=0; j<a.length(); j++) {
            if(a[j] != b[i+j]) tmp++; 
        }
        cnt.push_back(tmp);
        tmp = 0;
    }
    sort(cnt.begin(), cnt.end());
    cout << cnt[0] << endl;
    return 0;
}