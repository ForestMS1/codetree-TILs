#include <iostream>
using namespace std;

//0행과 0열은 사용x 1~50
int drow[] = {0,1,0,-1};//동남서북
int dcol[] = {1,0,-1,0};

int n, t, flow_t;
int r,c;
char d;

void change_dir()
{
    if(d == 'U' && r == 1)
    {
        d = 'D';
        flow_t++;
        return;
    }
    else if(d == 'D' && r == n)
    {
        d = 'U';
        flow_t++;
        return;
    }
    else if(d == 'R' && c == n)
    {
        d = 'L';
        flow_t++;
        return;
    }
    else if(d == 'L' && c == 1)
    {
        d = 'R';
        flow_t++;
        return;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> t;
    cin >> r >> c >> d;

    while(flow_t != t)
    {
        if(d=='U')
        {
            r += drow[3];
            c += dcol[3];
            flow_t++;
            change_dir();
        }
        else if(d=='D')
        {
            r += drow[1];
            c += dcol[1];
            flow_t++;
            change_dir();
        }
        else if(d == 'R')
        {
            r += drow[0];
            c += dcol[0];
            flow_t++;
            change_dir();
        }
        else if(d=='L')
        {
            r +=drow[2];
            c +=dcol[2];
            flow_t++;
            change_dir();
        }
    }

    cout << r << ' ' << c;

    return 0;
}