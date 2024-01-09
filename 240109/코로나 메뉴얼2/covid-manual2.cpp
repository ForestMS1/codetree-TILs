#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char x;
    int tmp;
    int count_abcd[4] = {};
    for(int i = 0; i < 3; i++) {
        cin >> x >> tmp;
        if(x == 'Y') {
            if(tmp >= 37) {
                count_abcd[0]++;
            }
            else {
                count_abcd[2]++;
            }
        }
        else {
            if(tmp >= 37) {
                count_abcd[1]++;
            }
            else {
                count_abcd[3]++;
            }
        }
    }
    for(int i = 0; i < 4; i++) {
        cout << count_abcd[i] << ' ';
    }
    if(count_abcd[0] >= 2) {
        cout << 'E';
    }
    return 0;
}