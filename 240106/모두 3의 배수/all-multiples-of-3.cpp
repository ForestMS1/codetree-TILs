#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    bool satisfied = true;
    for(int i = 0; i < 5; i++) {
        cin >> num;
        if(num % 3 != 0) {
            satisfied = false;
        }
    }
    if(satisfied) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}