#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[1001];
    int idx[1001] = {};
    int max = 0;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
            idx[i] = i;
        }
    }
    for(int i = n; i >= 0; i--) {
        if(idx[i] != 0) {
            cout << idx[i] << ' ';
        }
    }
    return 0;
}