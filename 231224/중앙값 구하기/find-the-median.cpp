#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    int mid;
    if(a > b) {
        if(a > c) {
            if(b>c){
                mid = b;
            }
            else {
                mid = c;
            }
        }
        else {
            mid = a;
        }
    }
    else if (c < b) {
        if(a < c) {
            mid = c;
        }
        else {
            mid = a;
        }
    }
    cout << mid;
    return 0;
}