#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    char k = s[0];
    char x = s[1];
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == x) {
            s[i] = k;
        }
    }
    cout << s;
    return 0;
}