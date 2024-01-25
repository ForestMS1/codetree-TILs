#include <iostream>
using namespace std;

void printreturn(int n) {
    if(n == 0) {
        return;
    }
    cout << n << ' ';

    printreturn(n-1);

    cout << n << ' ';

}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    printreturn(N);
    return 0;
}