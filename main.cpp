#include<iostream>
#include<string>
#include"myarr.h"
void test()
{
    myarr<int> intarr1;
    intarr1.pushback(5);
    intarr1.pushback(10);
    intarr1.pushback(15);
    std::cout<<intarr1.size();
}
int main()
{
    test();
    return 0;
}