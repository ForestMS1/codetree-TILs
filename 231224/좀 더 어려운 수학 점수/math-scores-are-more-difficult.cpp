#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int math1, eng1;
    int math2, eng2;

    cin >> math1 >> eng1 >> math2 >> eng2;
    if(math1 > math2) {
        cout << 'A';
    }
    else if (math1 < math2) {
        cout << 'B';
    }
    else if(math1 == math2) {
        if(eng1 > eng2) {
            cout << 'A';
        }
        else {
            cout << 'B';
        }
    }
    return 0;
}