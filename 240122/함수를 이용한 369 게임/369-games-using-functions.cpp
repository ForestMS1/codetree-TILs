#include <iostream>
using namespace std;
bool find369(int n) {
    while(n != 0) {
        if((n%10 != 0) && (n%10 == 3 || n%10 == 6 || n%10 ==9)) {
            return true;
        }
        n = n/10;
    }
    return false;
}
bool find3n(int n) {
    return n%3 == 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(find369(i) || find3n(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}