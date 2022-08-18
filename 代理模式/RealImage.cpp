#include"RealImage.h"

RealImage::RealImage(string fileName)
{
	fileName_ = fileName;
	loadFromDisk(fileName_);
}

void RealImage::loadFromDisk(string fileName)
{
	cout << "loading" << fileName<<endl;
}

void RealImage::display()
{
	cout << "displaying" << fileName_<<endl;
}
