#include <iostream>
#include <algorithm>
using namespace std;

#define N 5

class data
{
    public:
        string name;
        int height;
        float weight;
    
    data(string name, int height, float weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
    data(){}
};

bool cmp_name(const data &a, const data &b)
{
    return a.name < b.name;
}
bool cmp_height(const data &a, const data &b)
{
    return a.height > b.height;
}

data human[N];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < N; i++)
    {
        string name;
        int height;
        float weight;
        cin >> name >> height >> weight;

        human[i] = data(name, height, weight);
    }

    sort(human, human+N, cmp_name);
    
    cout << fixed;
    cout.precision(1);

    cout << "name\n";
    for(int i = 0; i < N; i++)
    {
        cout << human[i].name << ' ';
        cout << human[i].height << ' ';
        cout << human[i].weight << '\n';
    }

    sort(human, human+N, cmp_height);

    cout << "\nheight\n";
    for(int i = 0; i < N; i++)
    {
        cout << human[i].name << ' ';
        cout << human[i].height << ' ';
        cout << human[i].weight << '\n';
    }
    return 0;
}