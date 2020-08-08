/**
 * 부등호
 * 
 * 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<char> equal) {
    
}

int main() {
    int k=0;
    vector<char> equal;
    vector<int> small, big;
    cint >> k;
    char c;
    while(k--) {
        cin >> c;
        equal.push_back(c);
    }

    for(int i=0; i<equal.size(); i++) {
        // if(equal[i] == '<') {

        // }
        big.push_back(9-i);
        small.push_back(i+1);
    }

    sort(big.begin(), big.end(), compare(equal));

}