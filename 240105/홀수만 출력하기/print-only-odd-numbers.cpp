#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num;
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num % 2 != 0 && num % 3 == 0) {
            cout << num << '\n';
        }
    }
    return 0;
}