#include"Commander.h"
#include"CavalryStrategy.h"
#include"WallStrategy.h"
#include"InfantryStrategy.h"
int main()
{
	Strategy* cavalryStrategy = new CavalryStrategy;//Æï±ø
	Strategy* wallStrategy = new WallStrategy;//ÆÆé³±ø
	Strategy* infantryStrategy = new InfantryStrategy;//²½±ø

	Context* commander = new Commander(wallStrategy);
	commander->doAction();
	commander->setStrategy(cavalryStrategy);
	commander->doAction();

	commander->setStrategy(infantryStrategy);
	commander->doAction();
}