#pragma once
#include<iostream>

using namespace std;
class User
{
private:
	string name;
public:
	User();
	User(string name);
	string getName();
	void setName(string name);
	void sendMessage(string message);
	
};
