#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    while(true) {
        if(n % 2 == 0) {
            n = n/2;
            cnt++;
        }
        else {
            n = 3*n + 1;
            cnt++;
        }
        if(n == 1) {
            break;
        }
    }
    cout << cnt;

    return 0;
}