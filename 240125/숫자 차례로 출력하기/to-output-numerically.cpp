#include <iostream>
using namespace std;


void one_N(int n) {
    if(n == 0) {
        return;
    }
    one_N(n-1);
    cout << n << ' ';
}

void N_one(int n) {
    if(n == 0) {
        return;
    }
    cout << n << ' ';
    N_one(n-1);
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    one_N(N);
    cout << '\n';
    N_one(N);
    return 0;
}