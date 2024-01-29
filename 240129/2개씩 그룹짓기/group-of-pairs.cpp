#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.

    int N;
    cin >> N;
    
    int count_num = 2*N;

    int arr[2000];
    for(int i = 0; i < count_num; i++) {
        cin >> arr[i];
    }

    sort(arr,arr+count_num);

    int min_sum[1000];
    for(int i = 0; i < count_num; i++) {
        min_sum[i] = arr[i] + arr[count_num-1-i];
    }

    sort(min_sum, min_sum+N);
    cout << min_sum[N-1];
    
    return 0;
}