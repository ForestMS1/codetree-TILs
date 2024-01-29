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

    int min_sum = 0;
    for(int i = 0; i < count_num; i++) {
        int group_sum = arr[i] + arr[count_num-1-i];
        if(min_sum < group_sum) {
            min_sum = group_sum;
        }
    }

    cout << min_sum;
    
    return 0;
}