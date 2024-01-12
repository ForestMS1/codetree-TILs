#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[10][10];
    int num = 1;
    for(int i = n-1; i >= 0; i--) {
        if(i % 2 != 0) {
            for(int j = n-1; j >= 0; j--) {
                arr[j][i] = num;
                num++;
            }
        }
        else {
            for(int j = 0; j < n; j++) {
                arr[j][i] = num;
                num++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}