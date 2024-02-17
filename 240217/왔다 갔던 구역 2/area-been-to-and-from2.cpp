#include <iostream>
using namespace std;

int line[2000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int pos = 1000;
    int x;
    char dir;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> dir;
        if(dir == 'R')
        {
            for(int j = 0; j < x; j++)
            {
                line[pos]++;
                pos++;
            }
        }
        else {
            for(int j = 0; j < x; j++)
            {
                pos--;
                line[pos]++;
            }
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < 2001; i++)
    {
        if(line[i] > 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}