#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    int max1 = INT_MIN;
    int max1_idx;
    int max2 = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max1) {
            max1 = arr[i];
            max1_idx = i;
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] > max2 && i != max1_idx) {
            max2 = arr[i];
        }
    }
    cout << max1 << ' ' << max2;
    return 0;
}