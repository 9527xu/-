#pragma once
/*模板模式：用在固定步骤但具体实现细节不一样*/
class Game
{
protected:
	virtual void initialize()=0;
	virtual void startPlay()=0;
	virtual void endPlay()=0;
public:
	void paly()
	{
		//初始化游戏
		initialize();

		//开始游戏
		startPlay();

		//结束游戏
		endPlay();
	}
};
