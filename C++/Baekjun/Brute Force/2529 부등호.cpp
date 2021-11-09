/**
 * 부등호
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int k=0;
    vector<char> equal;
    vector<int> small, big;
    cin >> k;
    char c;
    for(int i=0; i<k; i++) {
        cin >> c;
        equal.push_back(c);
    }

    for(int i=0; i<=k; i++) {
        big.push_back(9-i);
        small.push_back(i);
    }
    int tmp;
    for(int i=0; i<equal.size(); i++) {
        if(equal[i] == '>') {
            if(big[i] < big[i+1]) {
                tmp = big[i];
                big[i] = big[i+1];
                big[i+1] = tmp;
            }
            if(small[i] < small[i+1]) {
                tmp = small[i];
                small[i] = small[i+1];
                small[i+1] = tmp;
            }
            // small.insert(small.end()-1, i);
        } else {
            if(big[i] > big[i+1]) {
                tmp = big[i];
                big[i] = big[i+1];
                big[i+1] = tmp;
            }
            if(small[i] > small[i+1]) {
                tmp = small[i];
                small[i] = small[i+1];
                small[i+1] = tmp;
            }
            // big.insert(big.end()-1, 9-i);
            // small.push_back(i);
        }
    }
    for(int i=0; i<big.size(); i++)
        cout << big[i];
    cout << endl;
    for(int i=0; i<small.size(); i++)
        cout << small[i];

}