#include"MediaAdpter.h"

MediaAdpter::MediaAdpter(string audioType)
{
	if (audioType == "VLC")
	{
		advancedMediaPlayer_ = new VlcPlayer;
	}
	else if (audioType == "MP4")
	{
		advancedMediaPlayer_ = new Mp4Player;
	}
}

void MediaAdpter::play(string audioType, string fileName)
{
	if (audioType == "VLC")
	{
		advancedMediaPlayer_->playVlc(fileName);
	}
	else if (audioType == "MP4")
	{
		advancedMediaPlayer_->playMp4(fileName);
	}
}
