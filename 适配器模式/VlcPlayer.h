#pragma once
#include"IAdvancedMediaPlayer.h"
class VlcPlayer :public IAdvancedMediaPlayer
{
public:
	


	// Í¨¹ý IAdvancedMediaPlayer ¼Ì³Ð
	virtual void playVlc(string fileName) override;

	virtual void playMp4(string fileName) override;

};