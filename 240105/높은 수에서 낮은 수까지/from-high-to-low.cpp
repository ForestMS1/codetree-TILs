#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,max,min;
    cin >> a >> b;
    if(a > b) {
        max = a;
        min = b;
    }
    else {
        max = b;
        min = a;
    }

    for(int i = max; i >= min; i--) {
        cout << i << ' ';
    }
    return 0;
}