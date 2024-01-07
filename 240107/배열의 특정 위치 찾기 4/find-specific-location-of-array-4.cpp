#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt = 0;
    int sum = 0;
    int stop;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            stop = i;
            break;
        }
    }
    for(int j = 0; j < stop; j++) {
            if(arr[j] % 2 == 0) {
                sum += arr[j];
                cnt++;
            }
        }
    cout << cnt << ' ' << sum;
    return 0;
}