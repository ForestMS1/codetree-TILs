#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000

class student
{
    public:
        int height, weight, index;
    
    student(int height, int weight, int index)
    {
        this->height = height;
        this->weight = weight;
        this->index = index;
    }
    student() {}
};

bool cmp(const student &a, const student &b)
{
    if(a.height == b.height)
    {
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

student s[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        int h,w;
        cin >> h >> w;

        s[i] = student(h,w,i);
    }

    sort(s+1, s+N+1, cmp);

    for(int i = 1; i <= N; i++)
    {
        cout << s[i].height << ' ' << s[i].weight << ' ' << s[i].index << '\n';
    }

    return 0;
}