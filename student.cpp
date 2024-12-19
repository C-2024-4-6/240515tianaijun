//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过

void Student::display()         //在类外定义display类函数
{
    std::cout << "num：" << num << std::endl;
    std::cout << "name：" << name << std::endl;
    std::cout << "sex：" << sex << std::endl;
}

void Student::set_value(int n, const char* nm, char s) // 在类外定义set_value类函数
{
    num = n;
    strncpy(name, nm, sizeof(name) - 1); // 使用strncpy防止缓冲区溢出
    name[sizeof(name) - 1] = '\0'; // 确保字符串以null结尾
    sex = s;
}
