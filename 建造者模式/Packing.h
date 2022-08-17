#pragma once
#include<iostream>
using namespace std;
class Packing//抽象包装方式
{
public:
	virtual string pack()=0;
};