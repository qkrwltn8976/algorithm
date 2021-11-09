/**
 * 0을 만들자 - Small
 * 
 * 길이 n인 정수 순열이 주어 졌을 때, 그 안에 숫자를 3개 골라서 합이 0(Zero) 이 되는 조합이 몇 개 있는지 출력하는 프로그램을 만들어 주세요.

만약 입력으로 [-3, -2, 0, 1, 1, 2, 3] 이 주어 졌을 때, 합이 0이 되는 조합은 (-3, 1, 2), (-2, 1, 1), (-2, 0, 2), ﻿(-3, 0, 3) ﻿ 으로 총 4 개가 있습니다.

만약 입력이 [1, 1, 0, -1, -1] 일 경우 0이 되는 조합은 (1, 0, -1) 밖에 없으므로, 답은 1이 됩니다.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    vector<int> num;
    int val=0, cnt=0;
    string input = "";

    for (int i=0; i<n; i++) {
        cin >> val;
        num.push_back(val);
    }

    vector< vector<int> > combi;
    for (int i=0; i<num.size(); i++) {
        for (int j=i+1; j<num.size(); j++) {
            for(int k=j+1; k<num.size(); k++) {
                vector<int> tmp;
                if(num[i] + num[j] + num[k] == 0){
                    tmp.push_back(num[i]);
                    tmp.push_back(num[j]);
                    tmp.push_back(num[k]);
                    sort( tmp.begin(), tmp.end() );
                }
                combi.push_back(tmp);
            }
        }
    }

    sort( combi.begin(), combi.end() );
    combi.erase( unique( combi.begin(), combi.end() ), combi.end() );

    cout << combi.size() << endl;
    return 0;
}
