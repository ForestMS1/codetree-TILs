#include <iostream>
using namespace std;

int arr[100];


int findmaxnum(int n) {
    if(n == 0) {
        return arr[0];
    }

    return max(findmaxnum(n-1), arr[n]);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findmaxnum(n-1);
    return 0;
}