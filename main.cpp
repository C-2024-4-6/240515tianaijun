//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"

int main()
{
    Student stud;                //�������
    stud.set_value(007, "tcg", 'm'); // ʹ��set_value������ʼ������
    stud.display();              //ִ��stud�����display����

    Student stud1;               // ������һ������
    stud1.set_value(123, "xyz", 'f'); // ʹ��set_value������ʼ������
    stud1.display();             // ִ��stud1�����display����

    return 0;
}
