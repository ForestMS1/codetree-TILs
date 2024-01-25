#include <iostream>
#include <string>
using namespace std;

bool two_more(string &s) {
    int len = s.length();

    for(int i = 0; i < len-1; i++) {
        if(s[i] != s[i+1]) {
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    if(two_more(A)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}