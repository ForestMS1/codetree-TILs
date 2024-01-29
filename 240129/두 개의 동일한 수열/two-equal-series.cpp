#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int A[100];
    int B[100];

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> B[i];
    }
    sort(A, A+n);
    sort(B, B+n);

    bool IsSame = true;
    for(int i = 0; i < n; i++) {
        if(A[i] != B[i]) {
            IsSame = false;
            break;
        }
    }
    if(IsSame) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}