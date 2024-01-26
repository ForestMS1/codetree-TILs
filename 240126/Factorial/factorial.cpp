#include <iostream>
using namespace std;

int Facto(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }

    return n * Facto(n-1);
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    cout << Facto(N);
    return 0;
}