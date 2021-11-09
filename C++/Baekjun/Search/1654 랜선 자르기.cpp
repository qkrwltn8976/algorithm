/**
 * 랜선 자르기
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> arr;
vector<long long> len;
long long k, n;

void binarySearch(long long left, long long right)
{
    while (left <= right)
    {
        long long result = 0, mid;
        mid = (left + right) / 2;

        for (int i = 0; i <= mid; i++)
        {
            if (arr[i] >= mid)
            {
                result += (arr[i] / mid);
            }
        }

        if (result == n)
        {
            len.push_back(mid);
        }

        if (result >= n)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }

        mid = left + right / 2;
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    cin >> k >> n;

    arr.resize(k);

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    binarySearch(1, arr[k - 1]);

    sort(len.begin(), len.end());

    cout << len.back() << "\n";

    return 0;
}

// 런타임에러 해결..못함
// 문제에서 랜선 길이는 자연수라고 했다. 그 말은 0이 아니라 1

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<int> lans;
// int main(void) {

// 	long N, K, answer;
// 	long long maxtemp = 0, input =0;
// 	long long left = 0, mid = 0, right = 0;
// 	answer = 0;
// 	cin >> K >> N;
// 	for (int i = 0; i < K; i++) {
// 		cin >> input;
// 		lans.push_back(input);
// 		if (maxtemp < input) maxtemp = input;
// 	}

// 	left = 1, right = maxtemp;

// 	while (left <= right) {

// 		int temp = 0; //개수
// 		mid = (left + right) / 2;

// 		for (int i = 0; i < lans.size(); i++) {
// 			temp += lans[i] / mid; //개수
// 		}
// 		if (temp < N) {
// 			right = mid - 1;
// 		}
// 		else {
// 			if(answer < mid) answer  = mid;
// 			left = mid + 1;
// 		}
// 	}
// 	cout << answer << endl;
// 	return 0;
// }