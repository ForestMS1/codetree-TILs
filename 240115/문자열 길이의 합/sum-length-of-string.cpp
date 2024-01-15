#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[10];
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        sum += str[i].length();
        if(str[i][0] == 'a') {
            cnt++;
        }
    }
    cout << sum << ' ' << cnt;
    return 0;
}