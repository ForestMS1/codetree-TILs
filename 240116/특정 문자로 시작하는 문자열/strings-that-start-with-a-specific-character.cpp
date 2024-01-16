#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[20];
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    char x;
    cin >> x;
    int cnt = 0;
    int sum = 0;
    double avg;

    for(int i = 0; i < n; i++) {
        if(str[i][0] == x) {
            cnt++;
            sum += str[i].length();
        }
    }
    avg = (double) sum / cnt;
    cout << cnt << ' ';
    cout << fixed;
    cout.precision(2);
    cout << avg;


    return 0;
}