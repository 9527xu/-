#pragma once
#include<iostream>
#include"Packing.h"
using namespace std;
//建造者模式关心的是组合，比如有肉汉堡，素汉堡，百事，可乐。它们之间两两配对形成不同的组合
class Item//某单个食品的基本属性
{
public:
	virtual string name()=0;//食物名
	virtual Packing* packing()=0;//包装方式
	virtual double price()=0;//价格
};
