#include <iostream>
#include <string>
using namespace std;

int dx[] = {1,0,-1,0}; //동남서북
int dy[] = {0,-1,0,1};
int dir = 3; // 0동 1남 2서 3북
int x,y;

int main() {
    // 여기에 코드를 작성해주세요.
    string com="";

    cin >> com;

    for(int i = 0; i < com.length(); i++)
    {
        switch(com[i])
        {
            case 'R':
            dir = (++dir) % 4;
            break;

            case 'L':
            dir = (--dir) % 4;
            break;

            case 'F':
            x += dx[dir];
            y += dy[dir];
            break;
        }
    }
    cout << x << ' ' << y;
    return 0;
}