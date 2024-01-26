#include <iostream>
using namespace std;

int calc(int n) {
    if(n % 2 == 0) {
        if(n == 2) {
            return 2;
        }
        return n + calc(n-2);
    }

    else {
        if(n == 1) {
            return 1;
        }
        return n + calc(n-2);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    cout << calc(N);
    return 0;
}