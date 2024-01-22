#include <iostream>
using namespace std;

int find(int a, int b, int c) {
    int arr[3] = {a,b,c};
    int min = 101;
    for(int i = 0; i < 3; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    cout << find(a,b,c);

    return 0;
}