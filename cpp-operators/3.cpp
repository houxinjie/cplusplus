#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 20;
    int c;

    if(a && b){
        cout << "Line 1 - 条件为真" << endl;
    }
    if(a || b){
        cout << "Line 2 - 条件为真" << endl;
    }

    a = 0;
    b = 10;
    if(a && b){
        cout << "Line 3 - 条件为真" << endl;
    }else{
        cout << "Line 4 - 条件不为真" << endl;
    }
    if(!(a && b)){
        cout << "Line 5 - 条件为真" << endl;
    }
    return 0;
}
