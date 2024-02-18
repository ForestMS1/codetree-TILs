#include <iostream>
using namespace std;


int coor[2001][2001];

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
            coor[i][j] = 1;
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
            coor[i][j] = 2;
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
            coor[i][j] = 3;
        }
    }

    int area = 0;
    for(int i = 0; i <= 2000; i++)
    {
        for(int j = 0; j <= 2000; j++)
        {
            if(coor[i][j] != 0 && coor[i][j] != 3)
            {
                area++;
            }
        }
    }
    cout << area;

    return 0;
}