#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int length, width;
    char X = 'X';
    while(X != 'C') {
        cin >> length >> width >> X;
        cout << length * width << '\n';
    }
    return 0;
}