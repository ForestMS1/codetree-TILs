#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    char x;
    int num;
    for(int i = 0; i < 3; i++) {
        cin >> x >> num;
        if(x == 'Y' && num >= 37) {
            cnt++;
        }
    }
    if(cnt >= 2) {
        cout << 'E';
    }
    else {
        cout << 'N';
    }
    return 0;
}