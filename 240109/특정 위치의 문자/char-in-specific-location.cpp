#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char x[6] = {'L','E','B','R','O','S'};
    int idx = -1;
    char k;
    cin >> k;
    for(int i = 0; i < 6; i++) {
        if(k == x[i]) {
            idx = i;
        }
    }
    if(idx == -1) {
        cout << 0;
    }
    else {
        cout << idx;
    }
    return 0;
}