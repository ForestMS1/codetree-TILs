#include <iostream>
using namespace std;


class player {
    public:
        char code_name;
        int score;
    
    player(char code_name = ' ', int score = 0) {
        this->code_name = code_name;
        this->score = score;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    player ply[5] = {
        player(),
        player(),
        player(),
        player(),
        player()
    };
    char code_name;
    int score;

    for(int i = 0; i < 5; i++) {
        cin >> code_name >> score;
        ply[i] = player(code_name, score);
    }


    int min_score = 101;
    int min_idx;
    for(int i = 0; i < 5; i++) {
        if(ply[i].score < min_score) {
            min_score = ply[i].score;
            min_idx = i;
        }
    }

    cout << ply[min_idx].code_name << ' ' << ply[min_idx].score;
    return 0;
}