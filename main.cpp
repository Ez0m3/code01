#include<iostream>
#include<string>
#include"myarr.h"
void test()
{
<<<<<<< HEAD
    myarr<std::string> strarr;
    strarr.pushback("天下");
    strarr.pushback("无敌");
    strarr.print();
=======
    myarr<int> intarr1;
    intarr1.pushback(5);
    intarr1.pushback(10);
    intarr1.pushback(15);
    std::cout<<intarr1.size();
>>>>>>> 27bfedbd4e0c70e96d08b8a30023b3a4b06f645f
}
int main()
{
    test();
    return 0;
}