#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char x;
    cin >> x;
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    string ans[5] = {};
    int cnt = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 2; j < 4; j++) {
            if(str[i][j] == x) {
                cout << str[i] << '\n';
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}