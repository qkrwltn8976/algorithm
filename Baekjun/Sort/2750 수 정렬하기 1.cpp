/**
 * 수 정렬하기 2
*/

#include <iostream>
#define MAX_SIZE 1000000

using namespace std;

int main() {
    int n;
    int arr[MAX_SIZE];

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int tmp;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j] > arr[j+1]) {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(int i; i<n; i++) 
        cout << arr[i] << endl;
    return 0;
}

// 버블정렬 시간초과