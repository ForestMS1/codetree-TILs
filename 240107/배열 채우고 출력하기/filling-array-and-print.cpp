#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char x[10];
    for(int i = 0; i < 10; i++) {
        cin >> x[i];
    }
    for(int i = 9; i >= 0; i--) {
        cout << x[i];
    }
    return 0;
}