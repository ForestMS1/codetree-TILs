#include <iostream>
using namespace std;

void calc(int &n, int &m) {
    if(n > m) {
        n += 25;
        m *= 2;
    }
    else {
        n *= 2;
        m += 25;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;

    calc(a,b);
    cout << a << ' ' << b;
    return 0;
}