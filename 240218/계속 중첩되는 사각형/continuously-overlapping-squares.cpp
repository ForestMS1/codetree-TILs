#include <iostream>
#include <vector>
using namespace std;

pair<bool,bool> map[201][201]; //first는 사각형존재여부 second는 색(true == 파랑, false == 빨강)

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int x1,y1,x2,y2;
    bool color = false; //빨강색으로 시작
    for(int i = 0; i < n; i++)
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
                map[j][k].first = true;
                map[j][k].second = color;
            }
        }


        //색변환
        if(color == false)
        {
            color = true;
        }
        else {
            color = false;
        }
    }

    int cnt = 0;
    for(int i = 0; i < 201; i++)
    {
        for(int j = 0; j < 201; j++)
        {
            if(map[i][j].first == true && map[i][j].second == true)
            {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}