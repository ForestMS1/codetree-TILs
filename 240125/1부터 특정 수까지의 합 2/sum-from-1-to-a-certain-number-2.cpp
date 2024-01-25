#include <iostream>
using namespace std;

int AllSum(int n) {
    int sum = n;

    if(n == 1) {
        return 1;
    }

    sum += AllSum(n-1);
    return sum;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    cout << AllSum(N);
    return 0;
}