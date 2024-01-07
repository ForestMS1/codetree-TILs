#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int cnt[1000];
    int sum = 0;
    while(a > 1) {
        cnt[a%b]++;
        a = a/b;
    }
    for(int i = 0; i < b; i++) {
        sum += cnt[i]*cnt[i];
    }
    cout << sum;
    return 0;
}