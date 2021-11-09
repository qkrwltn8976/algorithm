/**
 * 기타줄
 * 끊어진 기타줄의 개수 N과 기타줄 브랜드 M개,
 * 각각의 브랜드에서 파는 기타줄 6개가 들어있는 패키지의 가격, 낱개로 살 때의 가격이 주어질 때, 적어도 N개를 사기 위해 필요한 돈의 수를 최소로 하는 프로그램을 작성하시오.
 * 
 * n이 6이상이면 패키지 중 가장 저렴, 이하면 싱글 중 가장 저렴 선택 -> 모두 패키지와 싱글 섞인 것과 가격 비교
 * 1 모두 패키지
 * 2 패키지 + 싱글
 * 3 싱글
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Guitar {
    int package;
    int single;
};

bool compare_p(Guitar a, Guitar b) {
    return a.package < b.package;
}

bool compare_s(Guitar a, Guitar b) {
    return a.single < b.single;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<Guitar> g;
    Guitar tmp;
    int price = 0;
    int min_s=0, min_p=0;

    for(int i=0; i<m; i++) {
        cin >> tmp.package >> tmp.single;
        g.push_back(tmp);
    }

    sort(g.begin(), g.end(), compare_s);
    min_s = g[0].single;
    sort(g.begin(), g.end(), compare_p);
    min_p = g[0].package;

// **********
    if(min_s * 6 < min_p) min_p = min_s * 6;
// **********

    price = (n/6) * min_p + min((n%6)*min_s, min_p);
    cout << price << endl;

}