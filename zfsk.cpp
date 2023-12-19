#include <iostream>

int func(int b)
{
    b += 1;
    std::cout<<&b;
    return b;
}

void func_ref(int &b) // 
{
    b += 1;
    std::cout<<&b;
}


int main()
{
    int a = 2;
    std::cout<<a;
    func_ref(a);
    std::cout<<a;


    return 0;
} 