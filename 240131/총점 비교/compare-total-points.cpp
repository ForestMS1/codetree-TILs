#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX_N 10

class Student
{
    public:
        string name;
        int kor,eng,mat;

    Student(string name, int kor, int eng, int mat)
    {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->mat = mat;
    }

    Student(){}
};

bool cmp(const Student &a, const Student &b)
{
    return a.kor + a.eng + a.mat < b.kor + b.eng + b.mat;
}

Student student[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string name;
        int kor, eng, mat;
        cin >> name >> kor >> eng >> mat;

        student[i] = Student(name, kor, eng, mat);
    }

    sort(student, student+n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << student[i].name << ' ';
        cout << student[i].kor << ' ';
        cout << student[i].eng << ' ';
        cout << student[i].mat << '\n';
    }
    return 0;
}