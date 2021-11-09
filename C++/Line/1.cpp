#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#define MAX 1000000

using namespace std;


int solution(vector<vector<int> > boxes)
{
    int answer = 0;
    vector<int> vec(MAX, 0);

    for(int i=0; i<boxes.size(); i++) 
    {
        for(int j=0; j<2; j++) {
            vec[boxes[i][j]]++;
        }
    }

    for(int i=0; i<10; i++)
    {
        if(vec[i]%2 !=0) {
            answer++;
        }
    }

    if(answer%2==0)
        return answer/2;
    else
        return answer/2+1;
}

int main()
{
    vector<vector<int> > boxes;
    vector<int> box;
    box.push_back(1);
    box.push_back(2);
    boxes.push_back(box);
    box.clear();

    box.push_back(2);
    box.push_back(1);
    boxes.push_back(box);
    box.clear();

    box.push_back(3);
    box.push_back(3);
    boxes.push_back(box);
    box.clear();

    box.push_back(4);
    box.push_back(5);
    boxes.push_back(box);
    box.clear();

    box.push_back(5);
    box.push_back(6);
    boxes.push_back(box);
    box.clear();

    box.push_back(7);
    box.push_back(8);
    boxes.push_back(box);
    box.clear();

    solution(boxes);

    return 0;
}