#include <iostream>
using namespace std;

bool IsDecimal(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

bool AllEven(int n) {
    int tmp = n;
    int sum = 0;
    while(tmp != 0) {
        sum += tmp % 10;
        tmp = tmp/10;
    }
    if(sum % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(IsDecimal(i) && AllEven(i)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}