#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a1,a2;
    cin >> a1 >> a2;
    int arr[10] = {a1, a2, };
    for(int i = 2; i < 10; i++) {
        arr[i] = (arr[i-1] + arr[i-2])%10;
    }
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}