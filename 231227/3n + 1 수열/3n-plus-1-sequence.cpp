#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,cnt;
    cnt = 0;
    cin >> n;
    while(n != 1) {
        if(n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = n * 3 + 1;
        }
        cnt++;
    }
    cout << cnt;

    return 0;
}