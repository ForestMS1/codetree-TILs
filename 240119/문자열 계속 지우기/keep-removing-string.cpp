#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string A,B;
    cin >> A >> B;
    int len_A = A.length();
    int len_B = B.length();
    bool same = true;
    for(int i = 0; i < len_A; i++) {
        same = true;
        if(A[i] == B[0]) {
            for(int j = 1; j < len_B; j++) {
                if(A[i+j] != B[j]) {
                    same = false;
                    break;
                }
            }
            if(same) {
                A.erase(i,len_B);
                i = 0;
            }
        }
    }
    cout << A;
    return 0;
}