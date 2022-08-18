#include"AudioPlayer.h"

void AudioPlayer::play(string audioType, string fileName)
{
	if (audioType == "MP3")
	{
		cout << "playing mp3" << fileName << endl;
	}
	else if (audioType == "VLC" || audioType == "MP4")
	{
		mediaAdpter_ = new MediaAdpter(audioType);
		mediaAdpter_->play(audioType,fileName);
	}
	else
	{
		cout << "invalid media" << audioType << "format not supported" << endl;
	}
}
