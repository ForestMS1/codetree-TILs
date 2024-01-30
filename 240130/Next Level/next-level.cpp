#include <iostream>
using namespace std;

class player {
    public :
        string ID;
        int Level;
    
    player(string ID = "codetree", int Level = 10) {
        this->ID = ID;
        this->Level = Level;
    }
};


int main() {
    // 여기에 코드를 작성해주세요.
    string ID;
    int LV;
    cin >> ID >> LV;
    player p1 = player();
    player p2 = player(ID,LV);

    cout << "user " << p1.ID << ' ' << "lv " << p1.Level << '\n';
    cout << "user " << p2.ID << ' ' << "lv " << p2.Level;
    return 0;
}