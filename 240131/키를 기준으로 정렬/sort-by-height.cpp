#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define MAX_N 10

class student
{
    public:
        string name;
        int height,weight;

    student(string name, int height, int weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
    student(){}
};

bool cmp(const student &a, const student &b)
{
    return a.height < b.height;
}

student s[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string name;
    int height,weight;

    for(int i = 0; i < n; i++)
    {
        cin >> name >> height >> weight;
        s[i] = student(name,height,weight);
    }

    sort(s, s+n, cmp);

    for(int i = 0; i < n; i++) {
        cout << s[i].name << ' ' << s[i].height << ' ' << s[i].weight << '\n';
    }
    return 0;
}