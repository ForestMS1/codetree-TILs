#include <iostream>
using namespace std;

int n,m;

int calc_arr(int *x) {
    int sum = 0;
    while(m >= 1) {
        sum += x[m];

        if(m % 2 != 0) {
            m--;
        }
        else {
            m /= 2;
        }
    }

    return sum;
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    int A[101];
    for(int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    cout << calc_arr(A);
    return 0;
}