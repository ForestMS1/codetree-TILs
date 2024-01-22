#include <iostream>
using namespace std;

int dec(int n) {
    for(int i = 2; i < n; i++) {
        if(n%i == 0) {
            return 0;
        }
    }
    return n;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int sum = 0;
    for(int i = a; i <= b; i++) {
        sum += dec(i);
    }
    cout << sum;
    return 0;
}