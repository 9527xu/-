#include"ProxyImage.h"
int main()
{
	Image *image=new ProxyImage("test.jpg");
	//�Ӵ����м���ͼ��
	image->display();
	//����Ӵ����м���ͼ��
	image->display();
	return 0;
}