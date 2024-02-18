#include <iostream>
#include <string>
using namespace std;

class tile
{
    public:
        int blc, whc;
        string color;
    
    tile()
    {
        this->blc = 0;
        this->whc = 0;
        this->color = "none";
    }
};

tile t[200001]; //0~200001

int black_sum = 0; 
int white_sum = 0; 
int gray_sum = 0;

int main() {
    // 여기에 코드를 작성해주세요.
    int pos = 100000;
    int n;
    
    cin >> n;

    int x;
    char dir;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> dir;

        if(dir == 'R')
        {
            for(int j = 0; j < x; j++)
            {
                t[pos].blc++;
                if(t[pos].blc >= 2 && t[pos].whc >= 2)
                {
                    t[pos].color = "gray";
                }
                else
                {
                    t[pos].color = "black";
                }
                pos++;   
            }
            pos--;
        }

        else
        {
            for(int j = 0; j < x; j++)
            {
                t[pos].whc++;
                if(t[pos].blc >= 2 && t[pos].whc >= 2)
                {
                    t[pos].color = "gray";
                }
                else
                {
                    t[pos].color = "white";
                }
                pos--;   
            }
            pos++;
        }
    }

    for(int i = 0; i <= 200000; i++)
    {
        if(t[i].color.compare("black") == 0)
        {
            black_sum++;
        }
        else if(t[i].color.compare("white") == 0)
        {
            white_sum++;
        }
        else if(t[i].color.compare("gray") == 0)
        {
            gray_sum++;
        }
    }

    cout << white_sum << ' ' << black_sum << ' ' << gray_sum;
    
    return 0;
}