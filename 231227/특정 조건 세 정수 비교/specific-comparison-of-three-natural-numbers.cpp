#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num[3];
    int min = 0;
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            min = num[i];
        }
        cin >> num[i];
        if(num[i] < min) {
            min = num[i];
        }
    }
    if(num[0] == min) {
        cout << 1 << " ";
    }
    else {
        cout << 0 << " ";
    }
    if(num[0] == num[1] == num[2]) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}