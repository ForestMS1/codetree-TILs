#include <iostream>
using namespace std;

int coor[201][201];

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int x1, y1, x2, y2;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 100;
        x2 += 100;
        y1 += 100;
        y2 += 100;

        for(int j = x1; j < x2; j++)
        {
            for(int k = y1; k < y2; k++)
            {
                coor[j][k]++;
            }
        }
    }

    int area = 0;

    for(int i = 0; i <= 200; i++)
    {
        for(int j = 0; j <= 200; j++)
        {
            if(coor[i][j] >= 1)
            {
                area++;
            }
        }
    }
    cout << area;
    return 0;
}