#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    char x = str[0]; //이전 문자
    int cnt = 1; //연속된문자개수
    string encoded = "";

    for(int i = 1; i < str.length(); i++) {
        if(x == str[i]) {
            cnt++;
        }
        else {
            encoded += x;
            encoded += to_string(cnt);
            cnt = 1;
            x = str[i];
        }
    }
    encoded += x;
    encoded += to_string(cnt);

    cout << (int) encoded.length() << '\n' << encoded;
    return 0;
}