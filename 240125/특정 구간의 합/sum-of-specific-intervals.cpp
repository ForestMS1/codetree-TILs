#include <iostream>
using namespace std;

int A[101];

int prefix_sum(int &q, int &r) {
    int sum = 0;
    
    for(int i = q; i <= r; i++) {
        sum += A[i];
    }

    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> A[i];
    }


    int a1, a2;
    
    for(int i = 0; i < m; i++) {
        cin >> a1 >> a2;

        cout << prefix_sum(a1,a2) << '\n';
    }
    return 0;
}