#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,q;
    cin >> n >> q;
    int arr[101];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int num, arr_num,b;
    for(int i = 0; i < q; i++) {
        cin >> num >> arr_num;
        if(num == 1) {
            cout << arr[arr_num] << '\n';
        }
        else if(num == 2) {
            for(int j = 1; j <= n; j++) {
                if(arr[j] == arr_num) {
                    cout << j << '\n';
                }
            }
        }
        else if(num == 3) {
            cin >> b;
            for(int j = arr_num; j <= b; j++) {
                cout << arr[j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}