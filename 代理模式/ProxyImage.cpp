#include"ProxyImage.h"

ProxyImage::ProxyImage(string fileName)
{
	fileName_ = fileName;
}

void ProxyImage::display()
{
	if (realImage_ == nullptr)
	{
		realImage_ = new RealImage(fileName_);
	}
	realImage_->display();
}
