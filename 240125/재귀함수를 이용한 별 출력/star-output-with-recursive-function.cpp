#include <iostream>
using namespace std;

void printStar(int n) {
    if(n == 0) {
        return;
    }
    printStar(n-1);
    
    for(int i = 0; i < n; i++) {
        cout << '*';
    }
    cout << '\n';
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    printStar(N);
    return 0;
}