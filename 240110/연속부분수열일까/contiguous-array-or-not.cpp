#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    int A[100];
    int B[100];
    for(int i = 0; i < n1; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < n2; i++) {
        cin >> B[i];
    }
    bool x = true;
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(i+j >= n1) {
                x = false;
                break;
            }
            else if(A[i+j] != B[j]) {
                x = false;
                break;
            }
        }
    }

    if(x == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}