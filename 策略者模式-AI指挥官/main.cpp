#include"Commander.h"
#include"CavalryStrategy.h"
#include"WallStrategy.h"
#include"InfantryStrategy.h"
int main()
{
	Strategy* cavalryStrategy = new CavalryStrategy;//���
	Strategy* wallStrategy = new WallStrategy;//��鳱�
	Strategy* infantryStrategy = new InfantryStrategy;//����

	Context* commander = new Commander(wallStrategy);
	commander->doAction();
	commander->setStrategy(cavalryStrategy);
	commander->doAction();

	commander->setStrategy(infantryStrategy);
	commander->doAction();
}