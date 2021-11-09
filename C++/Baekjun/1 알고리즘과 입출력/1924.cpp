/**
 * 오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 이를 알아내는 프로그램을 작성하시오.
*/

#include <cstdio>
#include <cstring>

int main() {
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char week[][6] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int mon, day;
    scanf("%d %d", &mon, &day);
    for(int i=0; i<mon-1; i++) {
        day += month[i];
    }
    printf("%s\n", week[day%7]);
    return 0;
}