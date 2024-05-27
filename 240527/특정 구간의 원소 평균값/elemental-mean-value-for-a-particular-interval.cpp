#include <iostream>
using namespace std;

int N;
int arr[100];
int ans;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> N;
    int st = 0; //구간길이 0 ~ N-1
    

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++)
    {
        int sum = 0;
        for(int j = i; j < N; j++)
        {
            sum += arr[j];
            double avg = (double)sum/(j-i+1);

            for(int k = i; k <= j; k++)
            {
                if(arr[k] == avg)
                {
                    ans++;
                    break;
                }
            }
        }

    }
   

    cout << ans;
    

    return 0;
}