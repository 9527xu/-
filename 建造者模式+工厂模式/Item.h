#pragma once
#include<iostream>
#include"Packing.h"
using namespace std;
//������ģʽ���ĵ�����ϣ��������⺺�����غ��������£����֡�����֮����������γɲ�ͬ�����
class Item//ĳ����ʳƷ�Ļ�������
{
public:
	virtual string name()=0;//ʳ����
	virtual Packing* packing()=0;//��װ��ʽ
	virtual double price()=0;//�۸�
};
