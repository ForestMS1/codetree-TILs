#include <iostream>
using namespace std;

class bomb {
    public:
        string code;
        char color;
        int second;
    
    bomb(string code, char color, int second){
        this->code = code;
        this->color = color;
        this->second = second;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char color;
    int second;

    cin >> code >> color >> second;

    bomb b = bomb(code, color, second);

    cout << "code : " << b.code << '\n';
    cout << "color : " << b.color << '\n';
    cout << "second : " << b.second << '\n';
    return 0;
}