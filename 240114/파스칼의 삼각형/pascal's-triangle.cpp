#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[15][15]= {0, };
    arr[0][0] = 1;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            if(j != 0) {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            else {
                arr[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}