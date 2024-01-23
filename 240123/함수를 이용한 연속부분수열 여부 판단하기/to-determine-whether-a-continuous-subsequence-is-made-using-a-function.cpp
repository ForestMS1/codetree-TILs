#include <iostream>
using namespace std;

bool IsSame(int *A, int *B, int n1, int n2) {
    bool tmp;
    for(int i = 0; i < n1; i++) {
        tmp = true;
        for(int j = 0; j < n2; j++) {
            if(A[i+j] != B[j]) {
                tmp = false;
                break;
            }
        }
        if(tmp) {
            return true;
        }
    }
    if(tmp == false) {
        return false;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n1,n2;
    cin >> n1 >> n2;
    int A[100];
    int B[100];
    for(int i = 0; i < n1; i++) {
        cin >> A[i];
    }
    for(int i = 0; i < n2; i++) {
        cin >> B[i];
    }
    if(IsSame(A,B,n1,n2)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}