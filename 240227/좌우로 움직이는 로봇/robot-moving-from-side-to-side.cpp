#include <iostream>
using namespace std;

int A[50000];
int A_time=1;
int B[50000];
int B_time=1;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;

    int t;
    char d;
    int A_pos = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> t >> d;

        if(d == 'R')
        {
            for(int j = 0; j < t; j++)
            {
                A[A_time++] = ++A_pos;
            }
        }
        else if(d == 'L')
        {
            for(int j = 0; j < t; j++)
            {
                A[A_time++] = --A_pos;
            }
        }
    }

    int B_pos = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> t >> d;

        if(d == 'R')
        {
            for(int j = 0; j < t; j++)
            {
                B[B_time++] = ++B_pos;
            }
        }
        else if(d == 'L')
        {
            for(int j = 0; j < t; j++)
            {
                B[B_time++] = --B_pos;
            }
        }
    }

    int max = 0;
    if(A_time > B_time)
    {
        max = B_time;
    }
    else
    {
        max = A_time;
    }

    int cnt = 0;
    for(int i = 1; i <= max; i++)
    {
        if(A[i-1] != B[i-1] && A[i] == B[i])
        {
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}