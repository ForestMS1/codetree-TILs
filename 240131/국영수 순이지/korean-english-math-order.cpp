#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 10

class student 
{
    public:
        string name;
        int kor,eng,mat;
    
    student(string name, int kor, int eng, int mat)
    {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->mat = mat;
    }
    student(){}
};

bool cmp(const student &a, const student &b)
{
    if(a.kor == b.kor)
    {
        if(a.eng == b.eng)
        {
            return a.mat > b.mat;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

student s[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string name;
        int kor,eng,mat;

        cin >> name >> kor >> eng >> mat;

        s[i] = student(name,kor,eng,mat);
    }

    sort(s, s+n, cmp);

    for(int i = 0; i < n; i++)
    {
        cout << s[i].name << ' ';
        cout << s[i].kor << ' ';
        cout << s[i].eng << ' ';
        cout << s[i].mat << '\n';
    }
    return 0;
}