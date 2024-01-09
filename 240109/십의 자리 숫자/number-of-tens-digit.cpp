#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    int count_num[10] = {};
    while(true) {
        cin >> num;
        if(num == 0) {
            break;
        }
        count_num[num/10]++;
    }
    for(int i = 1; i <= 9; i++) {
        cout << i << " - " << count_num[i] << '\n';
    }
    return 0;
}