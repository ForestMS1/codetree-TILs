#include <iostream>
using namespace std;

int arr[50];
int N;

void absolute(int *x) {
    for(int i = 0; i < N; i++) {
        if(x[i] < 0) {
            x[i] *= -1;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    absolute(arr);

    for(int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}