#include <iostream>
using namespace std;

int arr[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int cnt = 1;
    int max = 1;

    bool cs = true; //양수
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];

        if(i == 0)
        {
            continue;
        }

        else if(arr[i-1] * arr[i] > 0)
        {
            cnt++;
        }
        else if(arr[i-1] * arr[i] < 0)
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