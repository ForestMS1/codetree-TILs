#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int x = 0;
    while(n != 1) {
        n = n/2;
        x++;
    }
    cout << x;
    return 0;
}