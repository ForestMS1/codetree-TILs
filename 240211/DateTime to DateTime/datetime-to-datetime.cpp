#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;

    int day = 11 * 24 * 60;
    int hour = 11 * 60;
    int min = 11;
    int sum1 = day + hour + min;

    int after_day = a * 24 * 60;
    int after_hour = b * 60;
    int after_min = c;
    int sum2 = after_day + after_hour + after_min;

    if(sum1 > sum2)
    {
        cout << -1;
        return 0;
    }

    cout << sum2 - sum1;



    return 0;
}