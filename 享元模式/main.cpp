#include"ShapeFactory.h"
#include<vector>
int main()
{
	vector<string>colors={ "Red", "Green", "Blue", "White", "Black" };
	ShapeFactory shapeFactory;
	for (int i = 0; i < 10; ++i)
	{
		Circle* circle =(Circle*) shapeFactory.getCircle(colors[i%5]);
		circle->setRadius(i);
		circle->draw();
	}
	return 0;
}