#include <iostream>
using namespace std;

const int MAX_N = 10;

int arr[MAX_N];

// 최대공약수를 구하는 함수
int gcdTwonum(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// n개의 수의 최대공약수를 재귀적으로 구하는 함수
int gcd(int n) {
    if (n == 2) {
        return gcdTwonum(arr[0], arr[1]);
    }
    return gcdTwonum(gcd(n - 1), arr[n - 1]);
}

// 두 수의 최소공배수를 구하는 함수
int lcmTwonum(int a, int b) {
    return (a * b) / gcdTwonum(a, b);
}

// n개의 수의 최소공배수를 재귀적으로 구하는 함수
int lcm(int n) {
    if (n == 2) {
        return lcmTwonum(arr[0], arr[1]);
    }
    return lcmTwonum(lcm(n - 1), arr[n - 1]);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << lcm(n);

    return 0;
}