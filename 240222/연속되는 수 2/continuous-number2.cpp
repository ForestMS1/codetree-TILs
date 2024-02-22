#include <iostream>
using namespace std;

int arr[1000];
int cnt = 1;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int max = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if(i == 0)
        {
            continue;
        }
        if(arr[i-1] == arr[i])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if(max < cnt)
        {
            max = cnt;
        }
    }
    cout << max;
    return 0;
}