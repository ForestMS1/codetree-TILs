#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q;
    cin >> s >> q;
    for(int i = 0; i < q; i++) {
        int q_num;
        cin >> q_num;
        if(q_num == 1) {
            int first_idx, second_idx;
            cin >> first_idx >> second_idx;
            char tmp = s[first_idx-1];
            s[first_idx-1] = s[second_idx-1];
            s[second_idx-1] = tmp;
            cout << s << '\n';
        }
        else {
            char first_char, second_char;
            cin >> first_char >> second_char;
            for(int j = 0; j < s.length(); j++) {
                if(s[j] == first_char) {
                    s[j] = second_char;
                }
            }
            cout << s << '\n';
        }
    }
    return 0;
}