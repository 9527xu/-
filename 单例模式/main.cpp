#include"Example.h"
#include<iostream>
#include"Singleton.h"
using namespace std;
int main()
{
	/**
	 * �ֲ���̬���Եķ�ʽʵ�ֵ�ʵ����
	 * ��̬�ֲ�����ֻ�ڵ�ǰ��������Ч�����������޷����ʡ�
	 * ��̬�ֲ�����ֻ�ڵ�һ�α����õ�ʱ���ʼ����Ҳ�洢�ھ�̬�洢�����������ڴӵ�һ�α���ʼ�������������ֹ��
	 */
	Example::getInstance().outAddress();
	Example::getInstance().outAddress();

	Singleton::GetInstance()->Print();
	Singleton::GetInstance()->deleteInstance();
	//���ٺ󲻿��ٴ���
	Singleton::GetInstance()->Print();
	Singleton::GetInstance()->Print();
	return 0;
}