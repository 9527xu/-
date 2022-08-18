#pragma once
#include"IMediaPlayer.h"
#include"VlcPlayer.h"
#include"Mp4Player.h"
#include"IAdvancedMediaPlayer.h"
class MediaAdpter :public IMediaPlayer
{
private:
	IAdvancedMediaPlayer* advancedMediaPlayer_;
public:
	MediaAdpter(string audioType);
	// ͨ�� IMediaPlayer �̳�
	virtual void play(string audioType, string fileName) override;
};