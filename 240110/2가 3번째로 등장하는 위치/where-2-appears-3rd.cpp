#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[101];
    int idx;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if(arr[i] == 2) {
            cnt++;
            if(cnt == 3) {
                idx = i;
            }
        }
    }
    cout << idx;

    return 0;
}