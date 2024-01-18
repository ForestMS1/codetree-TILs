#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string A,B;
    cin >> A >> B;
    int cnt = 0;
    for(int i = 0; i < A.length()-1; i++) {
        if(A[i] == B[0] && A[i+1] == B[1]) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}