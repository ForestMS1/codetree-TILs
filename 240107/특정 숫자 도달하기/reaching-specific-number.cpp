#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0;
    int cnt = 0;
    double avg;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] >= 250) {
            break;
        }
        sum += arr[i];
        cnt++;
    }
    avg = double(sum) / cnt;
    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}