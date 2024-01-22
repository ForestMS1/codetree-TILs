#include <iostream>
#include <algorithm>
using namespace std;

void gcd(int n, int m) {
    int max = std::max(n,m);
    int min = std::min(n,m);
    int mod = max % min;
    while(mod != 0) {
        max = min;
        min = mod;
        mod = max % min;
    }
    cout << min;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    gcd(n,m);
    return 0;
}