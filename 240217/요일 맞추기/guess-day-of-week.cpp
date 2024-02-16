#include <iostream>
#include <vector>
using namespace std;

int md[13] ={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

//어느것이 더 뒤에 날짜지?
bool max_pair(const pair<int,int> &p1, const pair<int,int> &p2)
{
    if(p1.first > p2.first)
    {   
        //앞의 인자가 크면 참
        return true;
    }
    else if(p1.first < p2.first)
    {
        return false;
    }
    else if(p1.first == p2.first)
    {
        if(p1.second > p2.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    pair<int,int> p1;
    pair<int,int> p2;
    int m1,d1,m2,d2;
    int day_idx = 1;
    cin >> m1 >> d1 >> m2 >> d2;

    p1.first = m1;
    p1.second = d1;
    p2.first = m2;
    p2.second = d2;

    while(true)
    {
        //1. m1 == m2인 경우
        if(p1.first == p2.first)
        {
            if(p1.second > p2.second)
            {
                while(p1.second != p2.second)
                {
                    p1.second--;
                    day_idx--;
                    if(day_idx < 0)
                    {
                        day_idx = 6;
                    }
                }
                break;
            }
            else if (p1.second < p2.second)
            {
                while(p1.second != p2.second)
                {
                    p1.second++;
                    day_idx++;
                    if(day_idx > 6)
                    {
                        day_idx = 0;
                    }
                }
                break;
            }
            else if (p1.second == p2.second)
            {
                day_idx = 1;
            }
        }
        //2. m1 > m2 인 경우
        if(p1.first > p2.first)
        {
            while(!(p1.first == p2.first && p1.second == p2.second))
            {
                p1.second--;
                day_idx--;
                if(day_idx < 0)
                {
                    day_idx = 6;
                }
                if(p1.second < 0)
                {   
                    p1.first--;
                    p1.second = md[p1.first];
                }
            }
            break;
        }
        else if (p1.first < p2.first)
        {
            while(!(p1.first == p2.first && p1.second == p2.second))
            {
                p1.second++;
                day_idx++;
                if(day_idx > 6)
                {
                    day_idx = 0;
                }
                if(p1.second > md[p1.first])
                {
                    p1.first++;
                    p1.second = 1;
                }
            }
            break;
        }
    }
    cout << day[day_idx];

    
    return 0;
}