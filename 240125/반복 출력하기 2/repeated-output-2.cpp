#include <iostream>
using namespace std;

void printHello(int n) {
    if(n == 0) {
        return;
    }

    printHello(n-1);
    cout << "HelloWorld" << '\n';
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    printHello(N);
    return 0;
}