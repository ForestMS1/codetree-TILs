#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int hour, mins;
    hour = 0;
    mins = 0;
    int elapsed_time = 0;

    int first_time, last_time;


    while(true)
    {
        if(hour == a && mins == b)
        {
            first_time = elapsed_time;
        }
        if(hour == c && mins == d)
        {
            last_time = elapsed_time;
            break;
        }

        elapsed_time++;
        mins++;

        if(mins  == 60)
        {
            hour++;
            mins = 0;
        }
    }

    cout << last_time - first_time;

    return 0;
}