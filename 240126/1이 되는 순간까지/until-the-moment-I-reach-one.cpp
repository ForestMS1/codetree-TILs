#include <iostream>
using namespace std;

int cnt = 0;

void processCount(int n) {
    if(n == 1) {
        return;
    }

    cnt++;

    if(n % 2 == 0) {
        processCount(n/2);
    }
    else {
        processCount(n/3);
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    processCount(N);
    cout << cnt;
    return 0;
}