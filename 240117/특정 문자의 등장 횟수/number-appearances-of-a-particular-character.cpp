#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int ee_cnt = 0;
    int eb_cnt = 0;
    for(int i = 0; i < str.length()-1; i++) {
        if(str[i] == 'e' && str[i+1] == 'e') {
            ee_cnt++;
        }
        if(str[i] == 'e' && str[i+1] == 'b') {
            eb_cnt++;
        }
    }
    cout << ee_cnt << ' ' << eb_cnt;
    return 0;
}