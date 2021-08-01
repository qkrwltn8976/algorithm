/**
 * 개미굴
*/

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

map<string, int> trie[15001];
int trie_size = 0;

void insert(vector<string> &vs)
{
    int node = 0;
    for (auto &s : vs)
    {

        if (trie[node].find(s) == trie[node].end()) // 찾지 못한 경우
        {
            cout << "case1" << endl; // node는 층임, 0층에 b, a 
            cout << node << " + " << s << endl;
            trie[node][s] = trie_size++;
            node = trie_size;
            cout << node << endl;

        }
        else
        {
            cout << "case2" << endl;
            cout << node << endl;
            node = trie[node][s]; // 존재할 경우 인덱스 저장, 같은 층에 존재하는 경우, 0층에 다른 문자 저장
            cout << node << endl;
        }
    }
}

// void print(int idx, int depth)
// {
//     for (auto &[s, i] : trie[idx])
//     {
//         cout << string(depth * 2, '-') << s << '\n';
// 		print(i, depth+1);
//     }
// }

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        vector<string> vs(k);

        for (auto &s : vs)
        {
            cin >> s;
        }

        insert(vs);
    }

    // print(0, 0);
}

/**
 * 트라이 (Trie)
 * 문자열을 (m log n)의 형태로 빠르게 찾는 알고리즘
 * 
 * ==> 트리 구조
*/