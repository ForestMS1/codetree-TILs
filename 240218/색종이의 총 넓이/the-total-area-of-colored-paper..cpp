#include <iostream>
using namespace std;

int map[201][201];

int main() {
    // 여기에 코드를 작성해주세요.
    int N,x,y;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> x >> y;

        x += 100;
        y += 100;

        for(int j = x; j < x+8; j++)
        {
            for(int k = y; k < y+8; k++)
            {
                map[j][k] = 1;
            }
        }
    }  

    int area = 0;
    for(int i = 0; i < 201; i++)
    {
        for(int j = 0; j < 201; j++)
        {
            if(map[i][j] == 1)
            {
                area++;
            }
        }
    }

    cout << area;
    return 0;
}