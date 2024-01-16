#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int n;
    cin >> str >> n;
    int cnt = 0;
    for(int i = str.length()-1; cnt < n; i--) {
        cout << str[i];
        cnt++;
    }
    return 0;
}