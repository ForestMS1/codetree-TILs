#include <iostream>
using namespace std;

int arr[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;

    int cnt = 0;
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] > t)
        {
            cnt++;
            if(max < cnt)
            {
                max = cnt;
            }
        }
        else
        {
            cnt = 0;
        }
    }
    cout << max;
    return 0;
}