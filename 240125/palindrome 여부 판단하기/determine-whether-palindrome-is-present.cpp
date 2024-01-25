#include <iostream>
#include <string>
using namespace std;

void Ispalindrome(string &s) {
    int len = s.length();
    bool isp = true;
    for(int i = 0; i < len; i++) {
        if(s[i] != s[len-1-i]) {
            isp = false;
            break;
        }
    }
    if(isp) {
        cout << "Yes";
        return;
    }
    cout << "No";
}

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;
    Ispalindrome(A);
    return 0;
}