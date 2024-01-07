#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0;
    int cnt;
    double avg;
    bool satisfied = false;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] >= 250) {
            satisfied = true;
            cnt = i;
            for(int j = 0; j < i; j++) {
                sum += arr[j];
            }
            break;
        }
    }
    if(satisfied == false){
        for(int i = 0; i < 10; i++) {
            sum += arr[i];
        }
    } 
    avg = double(sum) / cnt;
    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}