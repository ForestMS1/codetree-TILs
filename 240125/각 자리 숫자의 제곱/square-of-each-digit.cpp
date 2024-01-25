#include <iostream>
using namespace std;

int Nsum(int n) { //숫자 n의 각 자리 숫자의 제곱의 합을 구하는 함수
    if(n < 10) {
        return n*n;
    }

    return Nsum(n/10) + Nsum(n%10);
    
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    cout << Nsum(N);
    return 0;
}