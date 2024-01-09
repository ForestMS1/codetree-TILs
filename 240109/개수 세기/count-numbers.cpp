#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,num;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num == m) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}