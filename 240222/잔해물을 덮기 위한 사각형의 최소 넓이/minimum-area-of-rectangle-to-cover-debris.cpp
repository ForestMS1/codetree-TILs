#include <iostream>
using namespace std;

int map[2001][2001];

int main() {
    int x1,y1,x2,y2;
    
    // 첫 번째 직사각형 입력 받기
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;

    // 첫 번째 직사각형 표시
    for(int i = x1; i < x2; i++) {
        for(int j = y1; j < y2; j++) {
            map[i][j] = 1;
        }
    }

    // 두 번째 직사각형 입력 받기
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    x2 += 1000;
    y1 += 1000;
    y2 += 1000;

    // 두 번째 직사각형 제거
    for(int i = x1; i < x2; i++) {
        for(int j = y1; j < y2; j++) {
            map[i][j] = 0;
        }
    }

    // 최소 직사각형의 넓이 계산을 위한 변수 초기화
    int max_x = -3000;
    int min_x = 3000;
    int max_y = -3000;
    int min_y = 3000;
    bool exists = false;

    // 배열을 순회하면서 남은 첫 번째 직사각형의 좌표 찾기
    for(int i = 0; i < 2001; i++) {
        for(int j = 0; j < 2001; j++) {
            if(map[i][j] == 1) {
                exists = true;
                if(max_x < i) {
                    max_x = i+1;
                }
                if(max_y < j) {
                    max_y = j+1;
                }
                if(min_x > i) {
                    min_x = i;
                }
                if(min_y > j) {
                    min_y = j;
                }
            }
        }
    }

    // 최소 직사각형의 넓이 계산
    int area = (max_x - min_x) * (max_y - min_y);
    if(!exists) {
        area = 0;
    }
    
    // 결과 출력
    cout << area;
    return 0;
}