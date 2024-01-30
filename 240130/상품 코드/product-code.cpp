#include <iostream>
using namespace std;

class Product {
    public:
        string product_name;
        int product_code;
    
    Product(string product_name = "codetree", int product_code = 50) {
        this->product_name = product_name;
        this->product_code = product_code;
    }

};


int main() {
    // 여기에 코드를 작성해주세요.
    string product_name;
    int product_code;

    cin >> product_name >> product_code;

    Product p1 = Product();
    Product p2 = Product(product_name, product_code);

    cout << "product " << p1.product_code << " is " << p1.product_name << '\n';
    cout << "product " << p2.product_code << " is " << p2.product_name;


    return 0;
}