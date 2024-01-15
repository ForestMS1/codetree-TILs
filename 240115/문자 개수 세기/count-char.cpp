#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    getline(cin, str);
    char x;
    cin >> x;
    int cnt = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == x) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}