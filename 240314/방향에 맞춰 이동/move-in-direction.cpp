#include <iostream>
using namespace std;

int dx,dy;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;
    char dir;
    int dis;
    for(int i = 0; i < n; i++)
    {
        cin >> dir >> dis;

        switch(dir)
        {
            case 'E':
            dx += dis;
            break;

            case 'W':
            dx -= dis;
            break;

            case 'S':
            dy -= dis;
            break;

            case 'N':
            dy += dis;
            break;
        }
    }

    cout << dx << ' ' << dy;
    return 0;
}