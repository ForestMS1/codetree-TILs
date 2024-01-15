#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,r,c;
    cin >> n >> m;
    int cnt = 0;
    int arr[10][10] = {0,};
    for(int i = 0; i < m; i++) {
        cin >> r >> c;
        cnt++;
        arr[r][c] = cnt;
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}