/**
 * 좌표 정렬하기
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
    int x;
    int y;
};

bool compare(Point a, Point b)
{
    if (a.x == b.x)
    {
        return a.y < b.y;
    }
    else
    {
        return a.x < b.x;
    }
}

int main()
{
    int n;
    vector<Point> points;
    Point tmp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&tmp.x, &tmp.y);
        points.push_back(tmp);
    }

    sort(points.begin(), points.end(), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", points[i].x, points[i].y);
    }
    return 0;
}