#include <iostream>
using namespace std;

void Modify(int *x, int N) {
    for(int i = 0; i < N; i++) {
        if(x[i] % 2 == 0) {
            x[i] = x[i] / 2;
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int arr[50];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    Modify(arr,N);

    for(int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}