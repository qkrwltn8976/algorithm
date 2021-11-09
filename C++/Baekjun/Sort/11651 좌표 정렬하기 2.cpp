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
    if (a.y == b.y)
    {
        return a.x < b.x;
    }
    else
    {
        return a.y < b.y;
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

/**
 * 두번째 요소로 정렬, 그리고 두번째 요소가 같을 경우엔 첫번째로 정렬
*/