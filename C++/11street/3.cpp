#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A)
{
    int tot = 0, n = A.size();
    int ans = -n;
    bool check = false;
   
    for (int i = 0; i < A.size(); i++)
    {
        tot += A[i];
    }

    while (1)
    {

        if ((tot - (n * (n - 1)) / 2 + ans) % n == 0)
        {
            
            if (tot + ans > (n * (n - 1)) / 2)
                check = true;

            break;
        }
        else
            ans++;
    }

    if (check)
        ans = abs(ans);
    else
        ans = (ans < 0) ? ans + n : ans;

    return ans;
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    vector<int> A;
    A.push_back(6);
    A.push_back(2);
    A.push_back(3);
    A.push_back(5);
    A.push_back(6);
    A.push_back(3);
    // A.push_back(1);
    // A.push_back(2);
    // A.push_back(1);
    // A.push_back(2);
    // A.push_back(1);
    // A.push_back(4);
    // A.push_back(4);

    int ans = solution(A);
    cout << ans;

    return 0;
}

// {
//     int cnt = 0;
//     sort(A.begin(), A.end());
//     for (int i = 0; i < A.size(); i++)
//     {
//         while (1)
//         {
//             // cout << A[i] << "  " << A[i + 1] << endl;
//             if (A[i] + 1 == A[i + 1])
//                 break;
//             else
//             {
//                 if (A[i] + 1 < A[i + 1])
//                     A[i + 1]--;
//                 else
//                     A[i + 1]++;
//                 cnt++;
//             }
//         }
//     }
//     return cnt;