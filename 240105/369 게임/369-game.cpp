#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            cout << 0 << ' ';
            continue;
        }
        else if(i/100 == 3 || i/10 == 3 || i%1 == 3) {
            cout << 0 << ' ';
            continue;
        }
        else if(i/100 == 6 || i/10 == 6 || i%1 == 6) {
            cout << 0 << ' ';
            continue;
        }
        else if(i/100 == 9 || i/10 == 9 || i%1 == 9) {
            cout << 0 << ' ';
            continue;
        }
        cout << i << ' ';
    }
    return 0;
}