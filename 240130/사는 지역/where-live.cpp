#include <iostream>
#include <string>
using namespace std;

#define MAX_N 10


class person {
    public:
        string name, street_num, region;
    
    person(string name, string street_num, string region) {
        this->name = name;
        this->street_num = street_num;
        this->region = region;
    }
    person() {}
};


person p[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    
    string name, street_num, region;
    int max = 96;
    int max_idx;

    for(int i = 0; i < n; i++) {
        cin >> name >> street_num >> region;
        p[i] = person(name,street_num,region);
        if((int)name[0] > max) {
            max = (int)name[0];
            max_idx = i;
        }
    }

    cout << "name " << p[max_idx].name << '\n';
    cout << "addr " << p[max_idx].street_num << '\n';
    cout << "city " << p[max_idx].region << '\n';
    return 0;
}