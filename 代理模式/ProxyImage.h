#pragma once
#include"RealImage.h"
class ProxyImage :public Image
{
private:
	string fileName_;
	RealImage* realImage_;
public:
	ProxyImage(string fileName);
	// ͨ�� Image �̳�
	virtual void display() override;
};
