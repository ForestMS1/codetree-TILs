#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str[10];
    for(int i = 0; i < 10; i++) {
        cin >> str[i];
        if(i % 2 == 0) {
            cout << str[i] << '\n';
        }
    }
    return 0;
}