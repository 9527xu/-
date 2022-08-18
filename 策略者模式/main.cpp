#pragma once
#include"Context.h"
#include"OperatorAdd.h"
#include"OperatorMultiply.h"
#include"OperatorSubtract.h"
#include<iostream>
using namespace std;
int main()
{
	Context context1(new OperatorAdd());
	cout << context1.executeStrategy(1, 2) << endl;

	Context context2(new OperatorMultiply());
	cout << context2.executeStrategy(1, 2) << endl;

	Context context3(new OperatorSubtract());
	cout << context3.executeStrategy(1, 2) << endl;
	return 0;


}