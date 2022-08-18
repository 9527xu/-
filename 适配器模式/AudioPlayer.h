#pragma once
#include"IMediaPlayer.h"
#include"MediaAdpter.h"
class AudioPlayer :public IMediaPlayer
{
private:
	MediaAdpter* mediaAdpter_;
public:


	// Í¨¹ý IMediaPlayer ¼Ì³Ð
	virtual void play(string audioType, string fileName) override;

};