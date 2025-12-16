#include<iostream>
#include<string>
#include"myarr.h"
void test()
{
    myarr<std::string> strarr;
    strarr.pushback("天下");
    strarr.pushback("无敌");
    strarr.print();
}
int main()
{
    test();
    return 0;
}