#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char alpha[5][3];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> alpha[i][j];
            alpha[i][j] -= 32;
            cout << alpha[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}