#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << arr[i] * arr[i] << ' ';
    }
    return 0;
}