#include <iostream>
using namespace std;

int A[2000001];
int B[2000001];
int A_start = 0;
int B_start = 0;
int A_time = 0;
int B_time = 0;

int main() {
    // 여기에 코드를 작성해주세요.
    int N,M,t;
    char d;

    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        cin >> d >> t;
        if(d == 'R')
        {
            for(int j = 0; j < t; j++) 
            {
                A[++A_time] = ++A_start;
            }
        }
        else if(d == 'L')
        {
            for(int j = 0; j < t; j++)
            {
                A[++A_time] = --A_start;
            }
        }
    }

    for(int i = 0; i < M; i++)
    {
        cin >> d >> t;
        if(d == 'R')
        {
            for(int j = 0; j < t; j++) 
            {
                B[++B_time] = ++B_start;
            }
        }
        else if(d == 'L')
        {
            for(int j = 0; j < t; j++)
            {
                B[++B_time] = --B_start;
            }
        }
    }

    int max = 0;
    if(N > M)
    {
        max = N;
    }
    else
    {
        max = M;
    }

    int ans = -1;
    for(int i = 1; i < 2000001; i++)
    {
        if(A[i] == B[i])
        {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}