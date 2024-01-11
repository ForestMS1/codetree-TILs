#include <iostream>
#include <climits>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int price[1000];
    for(int i = 0; i < n; i++) {
        cin >> price[i];
    }
    int max_profit = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int profit = price[j] - price[i];
            if(profit > max_profit) {
                max_profit = profit;
            }
        }
    }
    cout << max_profit;

    
    return 0;
}