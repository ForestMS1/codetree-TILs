#include <iostream>
using namespace std;

int cow_height[101]; //1~100

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int cnt = 0;
    for(int i = 1; i <= N; i++)
    {
        cin >> cow_height[i];
    }

    for(int i = 1; i <= N; i++)
    {
        for(int j = i; j <= N; j++)
        {
            for(int k = j; k <= N; k++)
            {

                if(cow_height[i] <= cow_height[j] && cow_height[j] <= cow_height[k])
                {
                    if(i < j && j < k)
                    {
                        cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}