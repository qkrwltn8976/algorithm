#include <string>
#include <vector>

using namespace std;

int DFS(int prev, int idx, vector<int> numbers, int target)
{
    if (idx == numbers.size())
    {
        if (prev == target)
            return 1;
        return 0;
    }

    int num1 = prev + numbers[idx];
    int num2 = prev - numbers[idx];

    int sum = 0;
    sum += DFS(num1, idx + 1, numbers, target);
    sum += DFS(num2, idx + 1, numbers, target);
    return sum;
}

int solution(vector<int> numbers, int target)
{
    int answer = 0;
    answer += DFS(numbers[0], 1, numbers, target);
    answer += DFS(-numbers[0], 1, numbers, target);
    return answer;
}