#pragma once
#include"Image.h"
class RealImage :public Image
{
private:
	string fileName_;
public:
	RealImage(string fileName);
	void loadFromDisk(string fileName);
	// ͨ�� Image �̳�
	virtual void display() override;
};
