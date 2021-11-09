#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int a, int b)
{
    string astr = to_string(a);
    string bstr = to_string(b);
    if (astr.length() != bstr.length())
    {
        if (astr.length() < bstr.length())
        {
            for (int i = 0; i < bstr.length() - astr.length(); i++)
                astr += astr[astr.length() - 1];
            return astr > bstr;
        }
        else
        {
            for (int i = 0; i < astr.length() - bstr.length(); i++)
                bstr += bstr[bstr.length() - 1];
            return astr > bstr;
        }
    }
    else
    {
        return a > b;
    }
}

string solution(vector<int> numbers)
{
    string answer = "";
    int zero = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] == 0)
            zero++;
        if (zero == numbers.size())
            return to_string(0);
    }
    sort(numbers.begin(), numbers.end(), compare);

    for (int i = 0; i < numbers.size(); i++)
    {
        answer += to_string(numbers[i]);
    }

    return answer;
}

int main()
{
    vector<int> numbers;
    // numbers.push_back(10);
    // numbers.push_back(101);

    // numbers.push_back(6);
    // numbers.push_back(10);
    // numbers.push_back(2);

    // numbers.push_back(1);
    // numbers.push_back(11);
    // numbers.push_back(111);
    // numbers.push_back(1111);
    // numbers.push_back(0);
    // numbers.push_back(0);
    // numbers.push_back(70);
    // numbers.push_back(1000);
    numbers.push_back(340);
    numbers.push_back(3402);
    // numbers.push_back(0);
    string answer = solution(numbers);
    cout << answer << endl;
    return 0;
}