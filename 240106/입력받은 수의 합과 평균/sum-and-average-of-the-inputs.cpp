#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num;
    int sum = 0;
    double avg;
    for(int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }
    avg = double(sum) / n;
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg;
    return 0;
}