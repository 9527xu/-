#include"Game.h"
#include"Football.h"
#include"Snakes.h"
int main()
{
	Game* footballGame = new Football();
	footballGame->paly();
	Game* snakesGame = new Snakes;
	snakesGame->paly();
}