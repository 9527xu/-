#pragma once
#include"IAdvancedMediaPlayer.h"
class VlcPlayer :public IAdvancedMediaPlayer
{
public:
	


	// ͨ�� IAdvancedMediaPlayer �̳�
	virtual void playVlc(string fileName) override;

	virtual void playMp4(string fileName) override;

};