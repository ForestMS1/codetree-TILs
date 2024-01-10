#include <iostream>
#include <climits>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int min = INT_MAX;
    int arr[100];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(min == arr[i]) {
            cnt++;
        }
    }
    cout << min <<' '<<cnt;

    return 0;
}