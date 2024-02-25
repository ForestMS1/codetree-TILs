#include <iostream>
using namespace std;

int student[101]; //1~100 //1~100번 학생의 벌칙횟수

int main() {
    // 여기에 코드를 작성해주세요.
    int N,M,K;
    cin >> N >> M >> K;

    int sn;
    int ans = -1;
    for(int i = 0; i < M; i++)
    {
        cin >> sn;
        student[sn]++;
        if(student[sn] >= K)
        {
            ans = sn;
            break;
        }
    }
    cout << ans;
    return 0;
}