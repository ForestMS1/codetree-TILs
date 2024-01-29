#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    string T;
    cin >> n >> k >> T;
    string arr[101];
    string ans[101];
    int idx = 0;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        bool same = true;
        for(int j = 0; j < T.length(); j++) {
            if(arr[i][j] != T[j]) {
                same = false;
                break;
            }
        }
        if(same) {
            ans[idx] = arr[i];
            idx++;
        }
    }

    sort(ans, ans+idx);

    cout << ans[k-1];



    return 0;
}