#include"LogitechFactory.h"
#include"RazerFactory.h"
int main()
{
	MouseFactory* logitechFactory = new LogitechFactory;
	MouseFactory* razerFactory = new RazerFactory;

	Mouse* logitech = logitechFactory->createMouse();
	cout<<logitech->showName()<<endl;
	Mouse* razer = razerFactory->createMouse();
	cout << razer->showName() << endl;
	return 0;
}