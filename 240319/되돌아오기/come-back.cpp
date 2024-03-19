#include <iostream>
using namespace std;

int x,y;
int n;
int t_time = 0;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
//동서남북


bool is_start()
{
    if(x == 0 && y == 0)
    {
        return true;
    }
    return false;
};

int main() {
    // 여기에 코드를 작성해주세요.
    char dir;
    int dist;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> dir >> dist;
        switch(dir)
        {
            case 'E':
            for(int j = 0; j < dist; j++)
            {
                x += dx[0];
                y += dy[0];
                t_time++;
                if(is_start())
                {
                    cout << t_time;
                    return 0;
                }
            }
            break;

            case 'W':
            for(int j = 0; j < dist; j++)
            {
                x += dx[1];
                y += dy[1];
                t_time++;
                if(is_start())
                {
                    cout << t_time;
                    return 0;
                }
            }
            break;

            case 'S':
            for(int j = 0; j < dist; j++)
            {
                x += dx[2];
                y += dy[2];
                t_time++;
                if(is_start())
                {
                    cout << t_time;
                    return 0;
                }
            }
            break;

            case 'N':
            for(int j = 0; j < dist; j++)
            {
                x += dx[3];
                y += dy[3];
                t_time++;
                if(is_start())
                {
                    cout << t_time;
                    return 0;
                }
            }
            break;
        }
    }

    if(!is_start())
    {
        cout << -1;
    }
    return 0;
}