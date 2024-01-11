#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    double row_avg, col_avg, all_avg;
    double row_sum = 0;
    double col_sum = 0;
    double all_sum = 0;
    cout << fixed;
    cout.precision(1);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 2; i++) {
        row_sum = 0;
        for(int j = 0; j < 4; j++) {
            row_sum += arr[i][j];
            all_sum += arr[i][j];
        }
        row_avg = row_sum/4;
        cout << row_avg << ' ';
    }
    cout << '\n';

    for(int i = 0; i < 4; i++) {
        col_sum = 0;
        for(int j = 0; j < 2; j++) {
            col_sum += arr[j][i];
        }
        col_avg = col_sum / 2;
        cout << col_avg << ' ';
    }
    cout << '\n';

    all_avg = all_sum / 8;
    cout << all_avg << ' ';

    return 0;
}