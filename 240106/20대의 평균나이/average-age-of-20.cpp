#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int age = 20;
    int sum = 0;
    int cnt = 0;
    double avg;
    while(true) {
        cin >> age;
        if(age/10 == 2) {
            sum += age;
            cnt++;
        }
        else{
            break;
        }
    }
    avg = double(sum) / cnt;
    cout << fixed;
    cout.precision(2);
    cout << avg;

    return 0;
}