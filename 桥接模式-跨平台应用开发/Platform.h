#pragma once
#include"Application.h"
#include<iostream>
using namespace std;
class Platform//ƽ̨������
{
protected:
	Application* application_;
public:
	void setApplication(Application* application)
	{
		application_= application;
	}
	virtual void run() = 0;
};