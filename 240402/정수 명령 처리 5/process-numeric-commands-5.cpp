#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; // 명령의 수
    cin >> N;

    vector<int> arr; // 동적 배열
    for(int i = 0; i < N; ++i) {
        string command;
        cin >> command;
        if(command == "push_back") {
            int A;
            cin >> A;
            arr.push_back(A);
        } else if(command == "pop_back") {
            if (!arr.empty()) {
                arr.pop_back();
            }
        } else if(command == "size") {
            cout << arr.size() << endl;
        } else if(command == "get") {
            int k;
            cin >> k;
            // 배열은 0부터 시작하지만, 문제에서는 1부터 시작하므로 k-1을 해줍니다.
            if(k-1 < arr.size()) {
                cout << arr[k-1] << endl;
            }
        }
    }

    return 0;
}