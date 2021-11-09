/**
 * 회의실 배정
 * 각 회의가 겹치지 않게 하면서 회의실을 사용할 수 있는 회의의 최대 개수를 찾아보자.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Interval { 
    int start, end; 
};

// Compares two intervals according to staring times. 
bool compare(Interval a, Interval b) {
    // 끝 시간이 같으면 시작 시간 비교
    if(a.end == b.end)
    {
        return a.start < b.start;
    }
    else
    {
        return a.end < b.end;
    }
    
}

int main() {
    int n, cnt = 0;
    Interval tmp;
    vector<Interval> room;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> tmp.start >> tmp.end;
        room.push_back(tmp);
    }

    sort(room.begin(), room.end(), compare);

    int end = room[0].start;

    for(int i; i<room.size(); i++) {
        if(room[i].start >= end) {
            cnt++;
            end = room[i].end;
        }
    }

    cout << cnt << endl;

}

/**
 * #algorithm의 sort 함수는 시간 복잡도가 O(n log n) 이라 우수
*/

