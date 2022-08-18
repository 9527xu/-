#pragma once
#include"Image.h"
class RealImage :public Image
{
private:
	string fileName_;
public:
	RealImage(string fileName);
	void loadFromDisk(string fileName);
	// Í¨¹ý Image ¼Ì³Ð
	virtual void display() override;
};
