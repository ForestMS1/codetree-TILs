#include <iostream>
using namespace std;

void print10star() {
    for(int i = 0; i < 10; i++) {
        cout << '*';
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < 5; i++) {
        print10star();
        cout << '\n';
    }
    return 0;
}