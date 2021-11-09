/**
 * A+B-6
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        char c;
        cin >> a >> c >> b;
        cout << a+b << "\n";
    }
    
    return 0;
}
// int main()
// {
//     cin.tie(0);
//     cout.tie(0);

//     int T;
//     cin >> T;

//     while (T--)
//     {
//         string s;
//         cin >> s;
//         int a, b;
//         int pos = 0;
//         string tmp1, tmp2;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] == ',')
//             {
//                 pos = i;
//                 break;
//             }
//             else
//             {
//                 tmp1 += s[i];
//             }
//         }

//         for (int i = pos + 1; i < s.length(); i++)
//         {
//             tmp2 += s[i];
//         }

//         a = stoi(tmp1);
//         b = stoi(tmp2);

//         cout << a + b << "\n";
//     }

//     return 0;
// }
