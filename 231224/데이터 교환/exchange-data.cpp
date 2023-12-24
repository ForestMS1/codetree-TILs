#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5, b = 6, c = 7;
    int tmp1 = a, tmp2 = b;
    a = c;
    b = tmp1;
    c = tmp2;
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';

    return 0;
}