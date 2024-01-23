#include <iostream>
using namespace std;

void calc(int a, char o, int c) {
    int ans;
    switch(o) {
        case '+':
        ans = a + c;
        cout << a << " + " << c << " = " << ans;
        break;

        case '-':
        ans = a - c;
        cout << a << " - " << c << " = " << ans;
        break;

        case '*':
        ans = a * c;
        cout << a << " * " << c << " = " << ans;
        break;

        case '/':
        ans = a / c;
        cout << a << " / " << c << " = " << ans;
        break;

        default:
        cout << "False";
        break;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,c;
    char o;
    cin >> a >> o >> c;
    calc(a,o,c);
    return 0;
}