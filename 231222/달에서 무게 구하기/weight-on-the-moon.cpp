#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int weight = 13;
    double rate = 0.165;
    double ans = weight * rate;
    cout << fixed;
    cout.precision(6);
    cout << weight << " * " << rate << " = " << ans;
    return 0;
}