#include <iostream>
using namespace std;

int line[201];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int x1,x2;
    for(int i = 0; i < n; i++)
    {
        cin >> x1 >> x2;

        x1 = 100 + x1;
        x2 = 100 + x2;

        for(int j = x1; j < x2; j++)
        {
            line[j]++;
        }

    }

    int max = 0;
    for(int i = 0; i < 201; i++)
    {
        if(max < line[i])
        {
            max = line[i];
        }
    }

    cout << max;
    return 0;
}