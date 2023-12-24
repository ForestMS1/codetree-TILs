#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age1, age2;
    char sex1, sex2;
    cin >> age1 >> sex1;
    cin >> age2 >> sex2;
    cout << ((age1 >= 19 && sex1 == 'M') || (age2 >= 19 && sex2 == 'M'));

    return 0;
}