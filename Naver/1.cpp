#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX 1000000

using namespace std;

string getAvg(int n, int sum)
{
    cout << sum << "skf" << n << endl;
    sum /= n;
    sum = round(sum * 100) / 100.0;

    string answer = to_string(sum);
    cout << answer;
    return answer;
}
string solution(int n, vector<int> p, vector<int> c)
{
    int remain = 0;
    double sum = 0;
    int price = 100;
    int cnt = 0;
    bool good = true;
    
    for (int i = 0; i < n; i++)
    {

        remain += p[i];
        cout << i + 1 << "|  "
             << remain << " - " << c[i] << "->>>" << price << endl;
        if (remain < c[i])
        {
            good = false;
            if (price == 0)
            {
                n = i;
                return getAvg(i, sum);
            }
            if (price != 25)
                price /= 2;
            else
            {
                price = 0;
            }
        }
        else
        {
            good = true;
            remain -= c[i];

            sum += c[i] * price;
            cout << i + 1 << "|  "
                 << " " << c[i] << "*" << price << endl;
        }

        if (good && price != 100)
            price *= 2;
    }

    string getAvg(n, sum);
}

int main()
{
    vector<int> p;
    vector<int> c;

    p.push_back(6);
    p.push_back(2);
    p.push_back(1);
    p.push_back(0);
    p.push_back(2);
    p.push_back(4);
    p.push_back(3);

    c.push_back(3);
    c.push_back(6);
    c.push_back(6);
    c.push_back(2);
    c.push_back(3);
    c.push_back(7);
    c.push_back(6);

    solution(7, p, c);

    return 0;
}