#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num[10];
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int min_diff = 200;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int diff;
            if(num[i] > num[j]) {
                diff = num[i] - num[j];
            }
            else {
                diff = num[j] - num[i];
            }
            if(diff < min_diff) {
                min_diff = diff;
            }
        }
    }
    cout << min_diff;
    return 0;
}