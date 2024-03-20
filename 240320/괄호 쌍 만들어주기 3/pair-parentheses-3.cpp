#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;
    int len = A.length();
    char bracket;
    int cnt = 0;

    for(int i = 0; i < len; i++)
    {
        if(A[i] == '(')
        {
            for(int j = i; j < len; j++)
            {
                if(A[j] == ')')
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}