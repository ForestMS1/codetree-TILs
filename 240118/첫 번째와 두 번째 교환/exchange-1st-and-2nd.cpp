#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    char x = str[0];
    char k = str[1];
    bool trs;
    for(int i = 0; i < str.length(); i++) {
        trs = false;
        if(str[i] == x) {
            str[i] = k;
            trs = true;
        }
        if(trs != true && str[i] == k) {
            str[i] = x;
        }
    }
    cout << str;
    return 0;
}