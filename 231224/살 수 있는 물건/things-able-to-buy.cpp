#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(n < 1000) {
        cout << "no";
    }
    else if(n < 3000 && n >= 1000) {
        cout << "mask";
    }
    else if (n>=3000){
        cout << "book";
    }
    return 0;
}