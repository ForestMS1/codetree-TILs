#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    while(true) {
        cin >> num;
        if(num > 4) {
            cout << "Vacancy\n";
            break;
        }
        switch(num){
            case 1:
            cout << "John\n";
            break;

            case 2:
            cout << "Tom\n";
            break;

            case 3:
            cout << "Paul\n";
            break;

            case 4:
            cout << "Sam\n";
            break;
        }
    }
    return 0;
}