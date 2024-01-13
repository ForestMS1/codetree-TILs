#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0;
    int idx;
    bool x = false;
    double avg;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] == 0) {
            idx = i;
            x = true;
            break;
        }
    }
    if(x) {
        avg = double(sum) / idx;
    }
    else {
        avg = double(sum) / 10;
    }
    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}