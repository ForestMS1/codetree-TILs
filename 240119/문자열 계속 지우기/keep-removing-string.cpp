#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string A,B;
    cin >> A >> B;
    int len_B = B.length();

    while(true) {
        if(A.find(B) == string::npos) {
            break;
        }
        A.erase(A.find(B),len_B);
    }
    cout << A;
    return 0;
}