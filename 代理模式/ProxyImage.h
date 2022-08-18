#pragma once
#include"RealImage.h"
class ProxyImage :public Image
{
private:
	string fileName_;
	RealImage* realImage_;
public:
	ProxyImage(string fileName);
	// Í¨¹ý Image ¼Ì³Ð
	virtual void display() override;
};
