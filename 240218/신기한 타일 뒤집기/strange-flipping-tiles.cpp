#include <iostream>
#include <vector>
using namespace std;

pair <bool,int> tile[200001]; //참이면 흰색, 거짓이면 검은색

int main() {
    // 여기에 코드를 작성해주세요.
    int pos = 100000;
    int n;
    cin >> n;

    int x;
    char dir;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> dir;

        if(dir == 'R')
        {
            for(int j = 0; j < x; j++)
            {
                tile[pos].first = false;
                tile[pos].second++;
                pos++;
            }
            pos--;
        }
        else
        {
            for(int j = 0; j < x; j++)
            {
                tile[pos].first = true;
                tile[pos].second++;
                pos--;
            }
            pos++;
        }
    }


    int white_sum = 0;
    int black_sum = 0;
    for(int i = 0; i <= 200000; i++)
    {
        if(tile[i].first == true && tile[i].second > 0)
        {
            white_sum++;
        }
        else if(tile[i].first == false && tile[i].second > 0)
        {
            black_sum++;
        }
    }

    cout << white_sum << ' ' << black_sum;
    return 0;
}