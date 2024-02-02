#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 10

class person
{
    public:
        string name;
        int height,weight;
    
    person(string name, int height, int weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
    person(){}
};

bool cmp(const person &a, const person &b)
{
    if(a.height == b.height)
    {
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

person p[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string name;
        int height, weight;
        cin >> name >> height >> weight;

        p[i] = person(name, height, weight);
    }

    sort(p,p+n,cmp);

    for(int i = 0; i < n; i++)
    {
        cout << p[i].name << ' ' << p[i].height << ' ' << p[i].weight << '\n';
    }

    return 0;
}