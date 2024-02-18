#include <iostream>
using namespace std;

int map[2001][2001];

int main() {
    // 여기에 코드를 작성해주세요.
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;

    for(int i = x1; i < x2; i++)
    {
        for(int j = y1; j < y2; j++)
        {
            map[i][j] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;

    for(int i = x1; i < x2; i++)
    {
        for(int j = y1; j < y2; j++)
        {
            map[i][j] = 0;
        }
    }

    int max_x = 0;
    int min_x = 3000;
    int max_y = 0;
    int min_y = 3000;
    for(int i = 0; i < 2001; i++)
    {
        for(int j = 0; j < 2001; j++)
        {
            if(map[i][j] == 1)
            {
                if(max_x < i)
                {
                    max_x = i;
                }
                if(max_y < j)
                {
                    max_y = j;
                }
                if(min_x > i)
                {
                    min_x = i;
                }
                if(min_y > j)
                {
                    min_y = j;
                }
            }
        }
    }

    int area = (max_x - min_x+1) * (max_y - min_y+1);
    cout << area;
    return 0;
}