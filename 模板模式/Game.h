#pragma once
/*ģ��ģʽ�����ڹ̶����赫����ʵ��ϸ�ڲ�һ��*/
class Game
{
protected:
	virtual void initialize()=0;
	virtual void startPlay()=0;
	virtual void endPlay()=0;
public:
	void paly()
	{
		//��ʼ����Ϸ
		initialize();

		//��ʼ��Ϸ
		startPlay();

		//������Ϸ
		endPlay();
	}
};
