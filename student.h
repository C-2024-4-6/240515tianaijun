#pragma once
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
#ifndef STUDENT_H
#define STUDENT_H

class Student              //������
{
public:                   //���ó�Ա����ԭ������
    void display();
    void set_value(int n, const char* nm, char s); // ������Ա��������

private:
    int num;
    char name[20];
    char sex;
};

#endif // STUDENT_H
