#include <iostream>
using namespace std;

char pos[10001];
int max_pos;
int N,K;
char alp;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> N >> K;
    int pn;
    for(int i = 0; i < N; i++)
    {
        cin >> pn >> alp;
        if(pn > max_pos)
        {
            max_pos = pn;
        }

        pos[pn] = alp;
    }

    int sum = 0;
    int max_sum = 0;
    for(int i = 1; i <= max_pos-K; i++)
    {
        for(int j = i; j <= i+K; j++)
        {
            if(pos[j] == 'G')
            {
                sum += 1;
            }
            if(pos[j] == 'H')
            {
                sum += 2;
            }
        }
        if(sum > max_sum)
        {
            max_sum = sum;
        }
        sum = 0;
    }
    cout << max_sum;
    return 0;
}