#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    while(true) {
        cin >> num;
        if(num == 0) {
            break;
        }
        cout << num << '\n';
    }

    return 0;
}