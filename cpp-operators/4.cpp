#include <iostream>
using namespace std;

int main(){
    unsigned int a = 60;
    unsigned int b = 13;

    int c = 0;

    c = a & b;
    cout << "Line 1 - c 的值是 " << c << endl;

    c = a | b;
    cout << "Line 2 - c 的值是 " << c << endl;

    c = a ^ b;
    cout << "Line 3 - c 的值是 " << c << endl;

    c = ~a;
    cout << "Line 4 - c 的值是 " << c << endl;

    c = a << 2;
    cout << "Line 5 - c 的值是 " << c << endl;

    c = a >> 2;
    cout << "Line 6 - c 的值是 " << c << endl;

    return 0;
}
