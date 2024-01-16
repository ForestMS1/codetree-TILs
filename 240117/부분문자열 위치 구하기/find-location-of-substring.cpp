#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string in_str, o_str;
    cin >> in_str >> o_str;
    int start_idx = -1;

    if(in_str.find(o_str) != string::npos) {
        start_idx = in_str.find(o_str);
    }

    cout << start_idx;
    return 0;
}