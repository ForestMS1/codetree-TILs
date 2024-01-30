#include <iostream>
#include <string>
using namespace std;


class  spy {
    public:
        string secretcode;
        char meetingpoint;
        int time;

        spy(string secretcode, char meetingpoint, int time) {
            this->secretcode = secretcode;
            this->meetingpoint = meetingpoint;
            this->time = time;
        }
};
int main() {
    // 여기에 코드를 작성해주세요.
    string secretcode;
    char meetingpoint;
    int time;
    cin >> secretcode >> meetingpoint >> time;
    spy spy1 =spy(secretcode,meetingpoint,time);

    cout << "secret code : " << spy1.secretcode << '\n';
    cout << "meeting point : " << spy1.meetingpoint << '\n';
    cout << "time : " << spy1.time << '\n';
    return 0;
}