#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str[3];
    int max = 0;
    int min = 21;
    for(int i = 0; i < 3; i++) {
        cin >> str[i];
        if(max < str[i].length()) {
            max = str[i].length();
        }
        if(min > str[i].length()) {
            min = str[i].length();
        }
    }
    cout << max-min;

    return 0;
}