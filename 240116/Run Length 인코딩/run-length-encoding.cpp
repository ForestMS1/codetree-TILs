#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    char x = str[0]; //이전 문자
    bool seq = false; //연속인가?
    int cnt = 1; //연속된문자개수
    int sec = 1;//연속된구간개수

    for(int i = 1; i < str.length(); i++) {
        if(x != str[i]) {
            sec++;
        }
        x = str[i];
    }
    cout << sec*2 << '\n';
    x = str[0];

    for(int i = 1; i < str.length(); i++) {
        if(x == str[i]) {
            cnt++;
            seq = true;
        }
        else {
            seq = false;
        }
        if(seq == false) {
            cout << x << cnt;
            cnt = 1;
        }
        if(i == str.length()-1) {
            cout << str[i] <<cnt;
        }
        x = str[i];
    }
    return 0;
}