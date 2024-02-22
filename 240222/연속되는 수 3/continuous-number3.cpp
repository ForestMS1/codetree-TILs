#include <iostream>
using namespace std;

int arr[1000];

bool diff(int bef, int aft)
{
    if(bef < 0)
    {
        if(aft > 0)
        {
            return true; //부호다름
        }
        else
        {
            return false;//부호같음
        }
    }
    else
    {
        if(aft < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int cnt = 1;
    int max = 1;

    bool cs = true; //양수
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];

        if(i == 0)
        {
            continue;
        }

        else if(diff(arr[i-1],arr[i]) == false)
        {
            cnt++;
        }
        else if(diff(arr[i-1],arr[i]) == true)
        {
            cnt = 1;
        }

        if(max < cnt)
        {
            max = cnt;
        }
    }

    cout << max;
    return 0;
}