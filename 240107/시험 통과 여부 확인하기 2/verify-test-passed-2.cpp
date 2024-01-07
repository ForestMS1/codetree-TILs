#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int score[4];
    int sum = 0;
    int avg;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> score[j];
            sum += score[j];
        }
        avg = sum / 4;
        if(avg >= 60) {
            cout << "pass\n";
            cnt++;
        }
        else {
            cout << "fail\n";
        }
        sum = 0;
    }
    cout << cnt << '\n';
    return 0;
}