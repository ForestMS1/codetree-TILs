#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000

class point
{
    public:
        int index, num;
        bool check = false;
    
    point(int num, int index)
    {
        this->num = num;
        this->index = index;
    }

    point(){}
};

bool cmp(const point &a, const point &b)
{
    return a.num < b.num;
}

point original[MAX_N];
point sort_arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        int num;
        cin >> num;

        original[i] = point(num, i);
    }

    for(int i = 1; i <= N; i++)
    {
        sort_arr[i] = original[i];
    }

    sort(sort_arr+1,sort_arr+N+1, cmp);

    for(int i = 1; i <= N; i++)
    {
        sort_arr[i].index = i;
    }

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(original[i].num == sort_arr[j].num && sort_arr[j].check == false)
            {
                original[i].index = sort_arr[j].index;
                sort_arr[j].check = true;
                break;
            }
        }
    }

    for(int i = 1; i <= N; i++)
    {
        cout << original[i].index << ' ';
    }

    
    return 0;
}