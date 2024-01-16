#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str[10];
    for(int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    char x;
    cin >> x;
    bool n = false;
    for(int i = 0; i < 10; i++) {
        int lastidx = str[i].length()-1;
        if(str[i][lastidx] == x) {
            cout << str[i] << '\n';
            n = true;
        }
    }
    if(n == false) {
        cout << "None";
    }
    return 0;
}