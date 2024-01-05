#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int max, min;
    cin >> a >> b;
    int sum = 0;
    if(a > b) {
        max = a;
        min = b;
    }
    else {
        max = b;
        min = a;
    }
    for(int i = min; i <= max; i++) {
        if(i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}