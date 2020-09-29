/**
 * KMPSearch
*/

vector<int> kmpSearch(const string& H, const string& N)
{
    int n = H.size(), m = N.size();
    vector<int> ret;

    // pi : 접두사도 되고 접미사도 되는 문자열의 최대 길이
    vector<int> pi = getParitialMatch(N);

    int begin = 0, matched = 0;
    while(begin <= n-m)
    {
        // 문자열에서의 글자가 부분 문자열의 글자와 같다면 
        if(matched < m && H[begin + matched] == N[matched])
        { // 일치하는 글자의 수가 찾으려는 문자열 길이보다 작고 && 두 문자 일치
            ++matched;
            // m글자가 모두 일치했다면 답에 추가
            if(matched == m) ret.push_back(begin);
        }
        else
        {
            // 불일치가 발생했을 경우
            if(matched == 0) // #1 한 글자도 일치하지 않는 경우
                ++begin; // 다음 시작 위치에서 처음부터 검색 재개
            else 
            { // #2 일부 글자가 일치하지 않는 경우
                begin += matched - pi[matched-1];
                // 시작 위치를 바꾸었더라도 처음부터 다시 비교하지 않음
                // 옮긴 후에도 pi[matched-1]만큼은 항상 일치하기 때문에
                matched = pi[matched-1];
            }
        }
    }
}