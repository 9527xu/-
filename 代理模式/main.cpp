#include"ProxyImage.h"
int main()
{
	Image *image=new ProxyImage("test.jpg");
	//从磁盘中加载图像
	image->display();
	//无需从磁盘中加载图像
	image->display();
	return 0;
}