#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1,m2,d1,d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int ans = (num_of_days[m2] + d2) - (num_of_days[m1] + d1);

    cout << ans;
    return 0;
}