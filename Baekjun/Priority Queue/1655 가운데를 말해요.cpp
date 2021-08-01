/**
 * 가운데를 말해요
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct compare
{
    bool operator()(int x, int y)
    {
        return x > y;
    }
};

int main()
{
    int n;
    scanf("%d", &n);

    int data;
    priority_queue<int> max_pq;
    priority_queue<int, vector<int>, compare> min_pq;

    while (n--)
    {
        scanf("%d", &data);
        if (min_pq.size() == max_pq.size())
        {
            max_pq.push(data);
        }
        else
        {
            min_pq.push(data);
        }

        if(!min_pq.empty() && !max_pq.empty() && max_pq.top() > min_pq.top()) {
            int max = max_pq.top();
            int min = min_pq.top();
            max_pq.pop();
            min_pq.pop();
            max_pq.push(min);
            min_pq.push(max);
        }

        printf("%d\n", max_pq.top());
    }
    return 0;
}

/**
 * 
1. 수가 홀수 일 때, 중간 값은 maxheap의 탑
2. 수가 짝수 일 때, 중간 값은 maxheap의 탑
=> maxheap의 사이즈가 minheap의 사이즈보다 같거나 +1이여야 한다

최소힙의 모든 원소는 최대힙의 모든 원소보다 항상 크거나 같아야 한다.
즉, 최소힙의 가장 top() 값은 항상 최대힙의 가장 top() 값 보다 크거나 같아야 한다.
=> 최대힙의 top()값과 최소힙의 top()값을 swap해주면 된다.
*
*/