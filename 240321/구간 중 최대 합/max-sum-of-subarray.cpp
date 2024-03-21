#include <iostream>
using namespace std;

int n,k;
int sum;
int ans;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    int arr[100];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i <= n-k; i++)
    {
        sum = 0;
        for(int j = 0; j < k; j++)
        {
            sum += arr[i+j];
        }
        if(sum > ans)
        {
            ans = sum;
        }
    }
    cout << ans;
    return 0;
}