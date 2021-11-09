#include <string>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> ball, vector<int> order)
{
    vector<int> answer;
    deque<int> dq;
    vector<int> q;

    for (int i = 0; i < ball.size(); i++)
    {
        dq.push_back(ball[i]);
    }

    int index = 0;

    while (!dq.empty())
    {
        cout << order[index] << endl;

        bool found = false;
        int idx = -1;

        for (auto e : q)
        {
            idx++;
            if ((e == dq.front()) || (e == dq.back()))
            {
                found = true;
                cout << e << "  " << q[idx] << endl;
                break;
            }
        }
        while (found)
        {
            cout << "case 1  = " << found << endl;
            cout << dq.front() << "--" << dq.back() << endl;
            if (found)
            {
                cout << q.size() << endl;
                cout << "index=" << q[idx] << endl;
                if (dq.front() == q[idx])
                {
                    cout << "case 1-1  = " << found << endl;
                    answer.push_back(dq.front());
                    dq.pop_front();
                    q.erase(q.begin() + idx);
                }
                else if (dq.back() == q[idx])
                {
                    cout << "case 1-2  = " << q[idx] << endl;
                    answer.push_back(dq.back());
                    dq.pop_back();
                    q.erase(q.begin() + idx);
                    cout << "erased so" << q.size() << endl;
                }

                found = false;
                idx = -1;
                for (auto e : q)
                {
                    idx++;
                    if ((e == dq.front()) || (e == dq.back()))
                    {
                        found = true;
                        cout << e << "  " << q[idx] << endl;
                        break;
                    }
                    else
                        found = false;
                }
            }
        }

        if (dq.front() == order[index])
        {
            cout << "case 2" << endl;
            answer.push_back(dq.front());
            dq.pop_front();
        }
        else if (dq.back() == order[index])
        {
            cout << "case 3" << endl;
            answer.push_back(dq.back());
            dq.pop_back();
        }
        else
        { // 양 끝이 아닌 경우
            cout << "case 4" << endl;
            q.push_back(order[index]);
        }

        index++;
        cout << endl;
    }

    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
    return answer;
}

int main()
{
    vector<int> ball;
    vector<int> order;

    ball.push_back(11);
    ball.push_back(2);
    ball.push_back(9);
    ball.push_back(13);
    ball.push_back(24);
    // ball.push_back(6);

    order.push_back(9);
    order.push_back(2);
    order.push_back(13);
    order.push_back(24);
    order.push_back(11);
    // order.push_back(3);

    solution(ball, order);
    return 0;
}