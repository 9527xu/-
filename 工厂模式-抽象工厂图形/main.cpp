#include<iostream>
using namespace std;
#include"ProducerFactory.h"
int main()
{
	//��ȡͼ�ι���
	AbstractFactory* shapeFactory = ProducerFactory::getFactory("SHAPE");
	//��ȡ��ɫ����
	AbstractFactory* colorFactory = ProducerFactory::getFactory("COLOR");
	//����Բ��
	Shape* circle = shapeFactory->getShape("CIRCLE");
	//��Բ
	circle->draw();

	
	//������ɫ����
	Color *green = colorFactory->getColor("GREEN");
	//���
	green->fill();

	//����������
	Shape* triangle = shapeFactory->getShape("TRIANGLE");
	//��������
	triangle->draw();
	//������ɫ����
	Color* read = colorFactory->getColor("READ");
	//���
	read->fill();

	//����Բ������ɫ�������
	Shape* rectangle = shapeFactory->getShape("RECTANGLE");
	rectangle->draw();
	read->fill();

	//�ͷ��ڴ�
	delete read;
	delete rectangle;
	delete triangle;
	delete green;
	delete circle;
	delete colorFactory;
	delete shapeFactory;
}