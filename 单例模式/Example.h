#pragma once
//����ʽ
class Example
{
private:
	//��ֹ�ⲿ����
	Example() {}
	//��ֹ�ⲿ����
	~Example()
	{

	}
	//��ֹ�ⲿ��������
	Example(const Example&example){}
	//��ֹ�ⲿ��ֵ����
	const Example& operator=(const Example& signal) {}
	
	
public:
	void outAddress();
	static Example& getInstance();
};