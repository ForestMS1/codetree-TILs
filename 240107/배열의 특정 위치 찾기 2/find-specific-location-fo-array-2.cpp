#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int max, min;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if((i+1) % 2 == 0) {
            sum2 += arr[i];
        }
        else {
            sum1 += arr[i];
        }
    }
    if(sum1 > sum2) {
        max = sum1;
        min = sum2;
    }
    else {
        max = sum2;
        min = sum1;
    }
    cout << max - min;
    return 0;
}