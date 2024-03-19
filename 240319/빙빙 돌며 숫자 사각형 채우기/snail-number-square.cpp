#include <iostream>
using namespace std;

int map[101][101];
bool ans[101][101];
int n,m;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int dir = 0;
int x=1;
int y=1;


bool InRange()
{
    if(x > n || y > m || x < 1 || y < 1 || ans[x][y] == true)
    {
        return false;
    }
    return true;
};

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    for(int i = 1; i <= n*m; i++)
    {
        map[x][y] = i;
        ans[x][y] = true;

        x += dx[dir];
        y += dy[dir];
        if(!InRange())
        {
            x -= dx[dir];
            y -= dy[dir];
            dir++;
            if(dir >= 4)
            {
                dir = dir % 4;
            }
            x += dx[dir];
            y += dy[dir];
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << map[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}