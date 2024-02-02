#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

#define MAX_N 1000

class point
{
    public:
        int x,y,dist,index;

    point(int x, int y, int index)
    {
        this->x = x;
        this->y = y;
        this->dist = abs(0-x) + abs(0-y);
        this->index = index;
    }

    point() {}
};

bool cmp(const point &a, const point &b)
{
    if(a.dist == b.dist)
    {
        return a.index < b.index;
    }
    return a.dist < b.dist;
}

point p[MAX_N];


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        int x,y;
        cin >> x >> y;
        
        p[i] = point(x,y,i);

    }
    sort(p, p+N+1, cmp);

    for(int i = 1; i <= N; i++)
    {
        cout << p[i].index << '\n';
    }
    return 0;
}