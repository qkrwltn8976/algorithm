/**
 * 신입 사원
 * 서류심사 성적과 면접시험 성적 중 적어도 하나가 다른 지원자보다 떨어지지 않는 자만 선발한다는 원칙
 * 서류 심사 결과와 면접 성적이 모두 떨어진다면 A는 결코 선발되지 않는다
 * 이번 신규 사원 채용에서 선발할 수 있는 신입사원의 최대 인원수를 구하는 프로그램을 작성하시오
*/

#include <iostream>
#include <vector>

using namespace std;

struct Grade {
    int first, second;
};

bool compare(Grade a, Grade b) {
    // if()
    return a.first + a.second < b.first + b.second;
}

int main() {
    int t, n, a, b;
    Grade tmp;
    vector<Grade> grades;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> tmp.first >> tmp.second;
            grades.push_back(tmp);
        }
        sort(grades.begin(), grades.end(), compare);
    }

    for(int i=0; i<grades.size(); i++) {
        cout << grades[i].first << ' ' << grades[i].second << endl;
    }
}