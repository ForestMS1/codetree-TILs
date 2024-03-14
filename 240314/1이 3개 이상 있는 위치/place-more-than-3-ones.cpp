#include <iostream>
using namespace std;
#define MAX 100

int arr[MAX][MAX];
int cnt;
int drow[] = {0,1,0,-1}; //동남서북
int dcol[] = {1,0,-1,0};
int dir; //0동 1남 2서 3북

bool InRange(int n, int a, int b)
{
    if(n <= a || n <= b)
    {
        return false;
    }
    return true;
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int temcnt = 0;
            for(dir = 0; dir < 4; dir++)
            {
                if(InRange(n,i+drow[dir],j+dcol[dir]) && arr[i+drow[dir]][j+dcol[dir]] == 1)
                {
                    temcnt++;
                }
                if(temcnt >= 3)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}