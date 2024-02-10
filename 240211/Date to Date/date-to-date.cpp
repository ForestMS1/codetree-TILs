#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1,m2,d1,d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int m1_days = 0;
    for(int i = 1; i <= m1; i++)
    {
        m1_days += num_of_days[i];
    }
    int m2_days = 0;
    for(int i = 1; i <= m2; i++)
    {
        m2_days += num_of_days[i];
    }

    int ans = (m2_days + d2) - (m1_days + d1);
    if(ans == 0)
    {
        cout << 1;
        return 0;
    }

    cout << ans;
    return 0;
}