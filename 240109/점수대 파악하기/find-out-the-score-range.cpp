#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int score;
    int count_score[11] = {};
    while(true){
        cin >> score;
        if(score == 0) {
            break;
        }
        count_score[score/10]++;
    }
    for(int i = 1; i <= 10; i++) {
        cout << (11-i)*10 << " - " << count_score[11-i] << '\n';
    }
    return 0;
}