/**
 * 국영수
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
    string name;
    int ko;
    int en;
    int math;
};

bool compare(Student a, Student b)
{
    if (a.ko == b.ko)
    {
        if (a.en == b.en)
        {
            if (a.math == b.math)
            {
                return a.name < b.name;
            }

            return a.math > b.math;
        }

        return a.en < b.en;
    }
    return a.ko > b.ko;
}

int main()
{
    vector<Student> students;
    int n;
    cin >> n;
    students.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].ko >> students[i].en >> students[i].math;
    }

    sort(students.begin(), students.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << "\n";
    }
    return 0;
}