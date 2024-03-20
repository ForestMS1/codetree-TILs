#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int min_dist = 101;
int house[101]; //1~100
int main() {
    // 여기에 코드를 작성해주세요.
    int n,dist;
    cin >> n;
    int sum_dist = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> house[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            dist = i-j;
            if(dist < 0)
            {
                dist *= -1;
            }
            sum_dist += house[j] * dist;
        }
        if(sum_dist < min_dist)
        {
            min_dist = sum_dist;
        }
        sum_dist = 0;
    }

    cout << min_dist;
    return 0;
}