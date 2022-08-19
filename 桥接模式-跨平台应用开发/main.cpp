#include"Linux.h"
#include"Mac.h"
#include"Windows.h"
#include"Music.h"
#include"Text.h"
#include"Vedio.h"
int main()
{
	Platform* window = new Windows;
	Platform* mac = new Mac;
	Platform* linux = new Linux;

	Application* music = new Music;
	Application* text = new Text;
	Application* vedio = new Vedio;
	window->setApplication(music);
	window->run();
	mac->setApplication(text);
	mac->run();
	linux->setApplication(vedio);
	linux->run();


	return 0;
}