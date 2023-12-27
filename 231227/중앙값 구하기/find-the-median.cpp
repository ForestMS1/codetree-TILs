#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    
    //a가 중앙값
    if((a > b && a < c) || (a > c && a < b)) {
        cout << a;
    }
    //b가 중앙값
    else if((b > a && b < c) || (b > c && b < a)) {
        cout << b;
    }
    else {
        cout << c;
    }
    return 0;
}