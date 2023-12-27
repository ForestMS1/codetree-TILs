#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num[3];
    int min;
    for(int i = 0; i < 3; i++) {
        cin >> num[i];
        if(i == 0) {
            min = num[i];
        }
        if(min > num[i]) {
            min = num[i];
        }
    }
    cout << min;
    return 0;
}