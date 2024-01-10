#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101];
    int max = -1000;
    int min = 1000;
    for(int i = 0; i < 101; i++) {
        cin >> arr[i];
        if(arr[i] == 999 || arr[i] == -999) {
            for(int j = 0; j < i; j++) {
                if(arr[j] > max) {
                    max = arr[j];
                }
                if(arr[j] < min) {
                    min = arr[j];
                }
            }
            cout << max << ' ' << min;
            return 0;
        }
    }
    return 0;
}