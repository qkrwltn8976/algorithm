#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> &S) {
    vector<int> ans;
    for(int i=0; i<S.size(); i++)
    {
        for(int j=i+1; j<S.size(); j++)
        {
            for(int k=0; k<S[i].length(); k++)
            {
                if(S[i][k]==S[j][k]) {
                    ans.push_back(i);
                    ans.push_back(j);
                    ans.push_back(k);
                    return ans;
                }
            }
        }
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    vector<string> vec;
    string s = "abc";
    vec.push_back(s);
    s="bca";
    vec.push_back(s);
    s="dbe";
    vec.push_back(s);

    vector<int>ans = solution(vec);
    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}