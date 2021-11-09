/**
 * 최소 힙
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// 비교연산자 구현
struct compare {
    bool operator() (int a, int b){
        return a > b; // 내림차순 출력을 위한 비교
    }
};

int main()
{
    int n, data;
    scanf("%d", &n);

    priority_queue<int, vector<int>, compare> pq;
    // 자료형 int, 컨테이너 vector, 사용자 정의 비교연산자 compare

    while (n--)
    {
        scanf("%d", &data);
        if (data != 0)
            pq.push(data);
        else
        {
            if (!pq.empty())
            {
                printf("%d\n", pq.top());
                pq.pop();
            } 
            else {
                printf("0\n");
            }
        }
    }
}

/**
 * 우선순위 큐
 * #include <queue>
 * priority_queue
 
    priority_queue<int, vector<int>, compare> pq;
    // 자료형 int, 컨테이너 vector, 사용자 정의 비교연산자 compare
    
 * 
*/
