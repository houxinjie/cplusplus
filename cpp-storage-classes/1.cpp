#include <iostream>

void func(void);
static int count = 10;
int main(){
    while(count--){
        func();
    }
    return 0;
}

void func(void){
    static int i = 5;
    i++;
    std::cout << "变量 i 为 " << i;
    std::cout << " , 变量 count 为 " << count << std::endl;
}
