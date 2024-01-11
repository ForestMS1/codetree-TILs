#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int car_price[1000];
    int max_price = INT_MIN;
    int min_price = INT_MAX;
    int max_idx, min_idx;
    for(int i = 0; i < n; i++) {
        cin >> car_price[i];
        if(car_price[i] < min_price) {
            min_price = car_price[i];
            min_idx = i;
        }
        else if(car_price[i] == INT_MAX) {
            min_price = car_price[i];
            min_idx = i;
        }
    }
    if(min_idx == n-1) {
        cout << 0;
        return 0;
    }
    for(int i = min_idx; i < n; i++) {
        if(car_price[i] > max_price) {
            max_price = car_price[i];
            max_idx = i;
        }
    }
    if(max_idx > min_idx){
        cout << max_price - min_price;
    }
    return 0;
}