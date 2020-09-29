/**
 * 단순한 문자열 검색 알고리즘
*/

vector<int> naiveSearch(const string &H, const string &N)
{
    vector<int> ret;

    for (int begin = 0; begin <= H.size()-N.size(); ++begin)
    {
        bool matched = true;
        for(int i=0; i<N.size(); i++)
        {
            if(H[begin+i]!=N[i])
            {
                matched=false;
                break;
            }
        }
        if(matched) ret.push_back(begin);
    }
    return ret;
}