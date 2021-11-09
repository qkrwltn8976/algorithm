/**
 * getPartialMatchNaive
*/

vector<int> getPartialMatchNaive(const string &N)
{
    int m = N.size();
    vector<int> pi(m, 0);

    for (int begin = 1; begin < m; ++begin)
    {
        for (int i = 0; i < m - begin; ++i)
        {
            if (N[begin + i] != N[i])
                break;

            // pi를 갱신할 때 이미 있는 값과 i+1 중 더 큰 값 택
            pi[begin + i] = max(pi[begin + 1], i + 1);
        }
    }
}