#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    int cnt = 0;
    while(cnt != 3) {
        cin >> num;
        if(num % 2 == 0) {
            cout << num/2 << '\n';
            cnt++;
        }
    }
    return 0;
}