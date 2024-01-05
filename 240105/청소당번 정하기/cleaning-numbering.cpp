#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            if(i % 6 == 0) {
                if(i % 12 == 0) {
                    cnt3++;
                    continue;
                }
                cnt2++;
                continue;
            }
            cnt1++;
        }
        else if(i % 3 == 0) {
            cnt2++;
        }
    }
    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3;
    return 0;
}