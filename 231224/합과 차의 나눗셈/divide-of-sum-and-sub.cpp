#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    double a,b;
    cin >> a >> b;
    double ans = double(a+b) / double(a-b);
    cout.precision(3);
    cout << ans;
    return 0;
}