#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    while(s.length() != 1) {
        int n;
        cin >> n;
        if(n >= s.length()) {
            s.erase(s.length()-1,1);
            cout << s << '\n';
        }
        else{
            s.erase(n,1);
            cout << s << '\n';
        }
    }
    return 0;
}