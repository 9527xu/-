#include"Singleton.h"
#include<iostream>
// ����һ���оͳ�ʼ������ʵ�� ��������̰߳�ȫ
Singleton* Singleton::g_pSingleton = new (std::nothrow) Singleton();

Singleton* Singleton::GetInstance()
{
    return g_pSingleton;
}

void Singleton::deleteInstance()
{
    if (g_pSingleton)
    {
        delete g_pSingleton;
        g_pSingleton = nullptr;
    }
}

void Singleton::Print()
{
    std::cout << "�ҵ�ʵ���ڴ��ַ��:" << this << std::endl;
}

Singleton::Singleton()
{
    std::cout << "���캯��" << std::endl;
}

Singleton::~Singleton()
{
    std::cout << "��������" << std::endl;
}

