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
    int last_idx = 0;

    for(int i = 0; i < n; i++) {
        cin >> name >> street_num >> region;
        p[i] = person(name,street_num,region);
        if(p[i].name > p[last_idx].name) {
            last_idx = i;
        }
    }

    cout << "name " << p[last_idx].name << '\n';
    cout << "addr " << p[last_idx].street_num << '\n';
    cout << "city " << p[last_idx].region << '\n';
    return 0;
}