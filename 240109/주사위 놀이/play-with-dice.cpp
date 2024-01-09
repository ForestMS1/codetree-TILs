#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int dicenum[10];
    int count_num[7]={};
    for(int i = 0; i < 10; i++) {
        cin >> dicenum[i];
        count_num[dicenum[i]]++;
    }
    for(int i = 1; i <= 6; i++) {
        cout << i << " - " << count_num[i] << '\n';
    }

    return 0;
}