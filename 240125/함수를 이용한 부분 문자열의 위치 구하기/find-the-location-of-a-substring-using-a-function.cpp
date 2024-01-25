#include <iostream>
#include <string>
using namespace std;

string input_str, purpose_str;
int idx = -1;

int exist_substr(string &is, string &ps) {
    int is_len = is.length();
    int ps_len = ps.length();
    bool is_sub;

    for(int i = 0; i < is_len; i++) {
        is_sub = true;
        for(int j = 0; j < ps_len; j++) {
            if(is[i+j] != ps[j]) {
                is_sub = false;
            }
        }
        if(is_sub) {
            idx = i;
            break;
        }
    }

    return idx;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> input_str >> purpose_str;

    cout << exist_substr(input_str,purpose_str);

    return 0;
}