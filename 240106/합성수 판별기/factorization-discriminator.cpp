#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    bool satisfied = false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            satisfied = true;
        } 
    }
    if(satisfied) {
        cout << 'C';
    }
    else {
        cout << 'N';
    }
    return 0;
}