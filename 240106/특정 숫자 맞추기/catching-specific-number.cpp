#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    while(true) {
        cin >> num;
        if(num < 25) {
            cout << "Higher\n"; 
        }
        else if(num > 25) {
            cout << "Lower\n";
        }
        else if(num == 25) {
            cout << "Good\n";
            break;
        }
    }
    return 0;
}