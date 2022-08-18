#include"Example.h"
#include<iostream>
using namespace std;
void Example::outAddress()
{
	cout << this<<endl;
}
Example& Example::getInstance()
{
	static Example example;
	return example;
}