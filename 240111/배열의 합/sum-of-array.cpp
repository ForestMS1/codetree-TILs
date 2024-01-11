#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num[4][4];
    int col_sum;
    for(int i = 0; i < 4; i++) {
        col_sum = 0;
        for(int j = 0; j < 4; j++) {
            cin >> num[i][j];
            col_sum += num[i][j];
        }
        cout << col_sum << '\n';
    }
    return 0;
}