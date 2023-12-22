#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double one_ft = 30.48;
    double one_mi = 160934;
    cout << fixed;
    cout.precision(1);
    
    cout << "9.2ft = " << 9.2 * one_ft <<"cm"<< endl;
    cout << "1.3mi = " << 1.3 * one_mi << "cm";
    return 0;
}