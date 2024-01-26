#include <iostream>
using namespace std;

int arr[11];

int gcdTwonum(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int gcd(int n) {
    if(n == 2) {
        gcdTwonum(arr[0],arr[1]);
    }

    return gcdTwonum(gcd(n-1),arr[n-1]);
}

int lcmTwonum(int a, int b) {
    return (a*b) / gcdTwonum(a,b);
}

int lcm(int n) {
    if(n == 2) {
        return lcmTwonum(arr[0],arr[1]);
    }

    return lcmTwonum(lcm(n-1), arr[n-1]);
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << lcm(n);

    return 0;
}