#include <iostream>
using namespace std;

void printN(int N) {
    int cnt = 1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << cnt << ' ';
            cnt++;
            if(cnt >= 10) {
                cnt = 1;
            }
        }
        cout << '\n';
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    printN(N);
    return 0;
}