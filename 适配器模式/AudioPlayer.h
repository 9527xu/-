#pragma once
#include"IMediaPlayer.h"
#include"MediaAdpter.h"
class AudioPlayer :public IMediaPlayer
{
private:
	MediaAdpter* mediaAdpter_;
public:


	// ͨ�� IMediaPlayer �̳�
	virtual void play(string audioType, string fileName) override;

};