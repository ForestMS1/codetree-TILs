#include <iostream>
#include <algorithm>
using namespace std;

void printmidnum(int *x, int n) {
    cout << x[n/2+1] << ' ';
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[101];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if(i % 2 != 0) {
            printmidnum(arr, i);
        }
    }
    return 0;
}