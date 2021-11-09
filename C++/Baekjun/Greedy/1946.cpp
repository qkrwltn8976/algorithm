/**
 * 신입 사원
 * 서류심사 성적과 면접시험 성적 중 적어도 하나가 다른 지원자보다 떨어지지 않는 자만 선발한다는 원칙
 * 서류 심사 결과와 면접 성적이 모두 떨어진다면 A는 결코 선발되지 않는다
 * 이번 신규 사원 채용에서 선발할 수 있는 신입사원의 최대 인원수를 구하는 프로그램을 작성하시오
 * 
 * 동일한 등수가 없기 때문에 서류 또는 면접을 기준으로 등수대로 정렬
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Grade {
    int first, second;
};

bool compare(Grade a, Grade b) {
    // if()
    return a.first < b.first;
}

int main() {
    int t, n, a, b;
    Grade tmp;
    vector<Grade> grades;
    cin >> t;
    while(t--) {
        cin >> n;
        int cnt = 1, cmp = 0;
        for(int i=0; i<n; i++) {
            cin >> tmp.first >> tmp.second;
            grades.push_back(tmp);
        }
        sort(grades.begin(), grades.end(), compare);

        for(int i=1; i<n; i++) {
            if(grades[i].second < grades[cmp].second) {
                cnt++;
                cmp=i;
            }
        }
        cout << cnt << endl;
        grades.clear();
    }
   
}