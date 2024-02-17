#include <iostream>
using namespace std;

int block[101];
int main() {
    // 여기에 코드를 작성해주세요.
    int N,K;
    cin >> N >> K;
    
    int A,B;
    for(int i = 0; i < K; i++)
    {
        cin >> A >> B;
        for(int j = A; j <= B; j++)
        {
            block[j]++;
        }
    }

    int max = 0;
    for(int i = 1; i <= N; i++)
    {
        if(max < block[i])
        {
            max = block[i];
        }
    }

    cout << max;
    return 0;
}