#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000

class Student
{
    public :
        int height, weight, number;

    Student(int height, int weight, int number)
    {
        this->height = height;
        this->weight = weight;
        this->number = number;
    }
    Student(){}
};

bool cmp(const Student &a, const Student &b)
{
    if(a.height == b.height)
    {
        if(a.weight == b.weight)
        {
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

Student student[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int height,weight;
        cin >> height >> weight;
        
        student[i] = Student(height, weight, i+1);
    }

    sort(student, student+N, cmp);

    for(int i = 0; i < N; i++)
    {
        cout << student[i].height << ' ';
        cout << student[i].weight << ' ';
        cout << student[i].number << '\n';
    }
    return 0;
}