#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    string str = str1+str2;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            continue;
        }
        cout << str[i];
    }
    
    return 0;
}