//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include "student.h"            //��Ҫ©д���У��������ͨ����

void Student::display()         //�����ⶨ��display�ຯ��
{
    std::cout << "num��" << num << std::endl;
    std::cout << "name��" << name << std::endl;
    std::cout << "sex��" << sex << std::endl;
}

void Student::set_value(int n, const char* nm, char s) // �����ⶨ��set_value�ຯ��
{
    num = n;
    strncpy(name, nm, sizeof(name) - 1); // ʹ��strncpy��ֹ���������
    name[sizeof(name) - 1] = '\0'; // ȷ���ַ�����null��β
    sex = s;
}
