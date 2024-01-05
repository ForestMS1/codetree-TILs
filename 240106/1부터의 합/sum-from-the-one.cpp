#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int sum = 0;
    int ans;
    for(int i = 1; i <= 100; i++) {
        sum += i;
        if(sum >= n){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}