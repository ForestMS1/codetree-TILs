#include <iostream>
using namespace std;

int A[1000000]; //인덱스=시간 / 값=위치
int B[1000000];
int A_time = 0;
int B_time = 0;


int main() {
    // 여기에 코드를 작성해주세요.
    int N,M;
    cin >> N >> M;

    int v,t;
    int sum_t = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> v >> t;
        sum_t += t;
        for(int j = 0; j < t; j++)
        {
            A[++A_time] = v;
        }
    }

    for(int i = 0; i < M; i++)
    {
        cin >> v >> t;

        for(int j = 0; j < t; j++)
        {
            B[++B_time] += v;
        }
    }

    char first[sum_t+1]; //0~sum_t
    first[0] = '0';

    for(int i = 1; i <= sum_t; i++)
    {
        if(A[i] > B[i])
        {
            first[i] = 'A';
        }
        else if(A[i] < B[i])
        {
            first[i] = 'B';
        }
        else if(A[i] == B[i])
        {
            first[i] = first[i-1];
        }
    }

    int cnt = 0;
    for(int i = 1; i <= sum_t; i++)
    {
        if(first[i-1] != '0' && first[i] != first[i-1])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}