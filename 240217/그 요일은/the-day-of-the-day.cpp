#include <iostream>
#include <string>
using namespace std;

int md[13] ={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
int idx = 1;

int trs(int m1, int d1)
{
    int day = 0;
    for(int i = 1; i < m1; i++)
    {
        day += md[i];
    }
    day += d1;

    return day;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string days;
    int m1,d1,m2,d2;
    int cnt = 0;

    cin >> m1 >> d1 >> m2 >> d2 >> days;

    int diff = trs(m2,d2) - trs(m1,d1);

    for(int i = 0; i <= diff; i++)
    {
        if(day[idx].compare(days) == 0)
        {
            cnt++;
        }
        idx++;
        if(idx > 6)
        {
            idx = 0;
        }
    }
    cout << cnt;

    return 0;
}