#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int max1 = 0;
    int min2 = 1000;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] < 500 && arr[i] > max1) {
            max1 = arr[i];
        }
        if(arr[i] > 500 && arr[i] < min2) {
            min2 = arr[i];
        }
    }
    cout << max1 << ' ' << min2;
    return 0;
}