#include <iostream>
using namespace std;

int power(int a, int b) {
    int pow = 1;
    for(int i = 0; i < b; i++) {
        pow *= a;
    }

    return pow;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    cout << power(a,b);
    return 0;
}