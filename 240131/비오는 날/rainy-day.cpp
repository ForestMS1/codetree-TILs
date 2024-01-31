#include <iostream>
#include <string>
using namespace std;

#define MAX_N 100

class data
{
    public:
        string date,day,weather;
    
    data(string date, string day, string weather)
    {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
    data(){}
};

data rainy[MAX_N];
int idx = 0;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string date,day,weather;
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> date >> day >> weather;
        if(weather == "Rain")
        {
            rainy[idx] = data(date,day,weather);
            idx++;
        }
    }

    string min_date = "2101-12-30";
    int min_idx;
    for(int i = 0; i < idx; i++)
    {
        if(rainy[i].date < min_date)
        {
            min_date = rainy[i].date;
            min_idx = i;
        }
    }

    cout << rainy[min_idx].date << ' ' << rainy[min_idx].day << ' ' << rainy[min_idx].weather;
    return 0;
}