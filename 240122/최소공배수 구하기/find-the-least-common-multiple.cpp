#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int n, int m) {
    int max = std::max(n,m);
    int min = std::min(n,m);
    int mod = max % min;
    while(mod != 0) {
        max = min;
        min = mod;
        mod = max % min;
    }

    return min;
}

int lcm(int n, int m) {
    return (n*m)/gcd(n,m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;

    cout << lcm(n,m);

    return 0;
}