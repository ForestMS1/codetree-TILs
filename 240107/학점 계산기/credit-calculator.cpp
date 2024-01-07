#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    double score[5];
    double sum = 0;
    double avg;
    for(int i = 0; i < n; i++) {
        cin >> score[i];
        sum += score[i];
    }
    avg = double(sum) / n;
    cout << fixed;
    cout.precision(1);
    cout << avg << '\n';
    if(avg >= 4.0) {
        cout << "Perfect";
    }
    else if(avg >= 3.0) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }

    return 0;
}