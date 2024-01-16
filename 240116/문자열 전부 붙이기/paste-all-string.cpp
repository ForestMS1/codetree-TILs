#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[10];
    string ans= "";
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        ans += str[i];
    }
    cout << ans;
    return 0;
}