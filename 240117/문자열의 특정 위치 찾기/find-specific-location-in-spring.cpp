#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char x;
    cin >> str >> x;
    bool exist = false;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == x) {
            cout << i;
            exist = true;
        }
    }
    if(exist == false) {
        cout << "No";
    }
    return 0;
}