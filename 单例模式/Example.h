#pragma once
//懒汉式
class Example
{
private:
	//禁止外部构造
	Example() {}
	//禁止外部析构
	~Example()
	{

	}
	//禁止外部拷贝构造
	Example(const Example&example){}
	//禁止外部赋值操作
	const Example& operator=(const Example& signal) {}
	
	
public:
	void outAddress();
	static Example& getInstance();
};