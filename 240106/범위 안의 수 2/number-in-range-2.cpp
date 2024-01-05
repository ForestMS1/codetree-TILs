#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    double avg;
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < 10; i++) {
        cin >> num;
        if(num >= 0 && num <= 200) {
            sum += num;
            cnt++;
        }
    }
    avg = double(sum) / cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg;
    return 0;
}