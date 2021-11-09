/**
 * kmpSearch2
*/
vector<int> kmpSearch2(const string &H, const string &N)
{
    int n = H.size(), m = N.size();
    vector<int> ret;
    vector<int> pi = getPartialMatch(N);

    int matched = 0;

    for (int i = 0; i < n; ++i)
    {
        // 글자가 불일치하는 경우
        while (matched > 0 && H[i] != N[matched])
            matched = pi[matched - 1];

        if (H[i] == N[matched])
        {
            ++matched;
            if (matched == m)
            {
                ret.push_back(i - m + 1);
                matched = pi[matched - 1];
            }
        }
    }

    return ret;
}