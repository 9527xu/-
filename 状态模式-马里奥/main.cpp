#include"Mario.h"
int main()
{
	Mario* mario = new Mario();
	mario->wounded();
	mario->revive();
	mario->getSunFlower();
	mario->getMushroom();
	cout<<mario->getScore();
	delete mario;
	return 0;
}