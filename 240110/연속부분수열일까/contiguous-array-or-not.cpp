#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int A[101];
    int B[101];
    for(int i = 1; i <= n1; i++) {
        cin >> A[i];
    }
    for(int i = 1; i <= n2; i++) {
        cin >> B[i];
    }
    bool x = false;
    for(int i = 1; i <= n1-n2+1; i++) {
        x = false;
        for(int j = 1; j <= n2; j++) {
            if(A[i+j-1] == B[j]) {
                x = true;
            }
            else {
                x = false;
            }
        }
        if(x == true) {
            break;
        }
    }

    if(x) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}