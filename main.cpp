//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"

int main()
{
    Student stud;                //定义对象
    stud.set_value(007, "tcg", 'm'); // 使用set_value函数初始化对象
    stud.display();              //执行stud对象的display函数

    Student stud1;               // 定义另一个对象
    stud1.set_value(123, "xyz", 'f'); // 使用set_value函数初始化对象
    stud1.display();             // 执行stud1对象的display函数

    return 0;
}
