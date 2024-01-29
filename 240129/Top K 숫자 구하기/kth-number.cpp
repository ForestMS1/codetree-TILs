#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N,k;
    cin >> N >> k;
    int arr[1001];

    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    sort(arr+1, arr+N+1);

    cout << arr[k];

    return 0;
}