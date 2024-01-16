#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[10];
    string ans = "1";
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        ans += str[i];
    }
    for(int i = 1; i <= ans.length(); i++) {
        cout << ans[i];
        if(i % 5 == 0) {
            cout << '\n';
        }
    }
    return 0;
}