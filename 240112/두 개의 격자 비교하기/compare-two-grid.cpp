#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int arr1[10][10];
    int arr2[10][10];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr1[i][j] != arr2[i][j]) {
                cout << 1 << ' ';
            }
            else {
                cout << 0 << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}