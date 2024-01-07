#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int sum1 = 0;
    int sum2 = 0;
    int cnt = 0;
    double avg;
    for(int i = 1; i <= 10; i++) {
        cin >> a[i];
        if(i % 2 == 0) {
            sum1 += a[i];
        }
        if(i % 3 == 0) {
            sum2 += a[i];
            cnt++;
        }
    }
    avg = double(sum2) / cnt;
    cout << sum1 << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}