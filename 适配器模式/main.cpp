#include"AudioPlayer.h"
int main()
{
	AudioPlayer audioPlayer;
	audioPlayer.play("MP3", "beyond the horizon.mp3");
	audioPlayer.play("MP4", "beyond the horizon.mp4");
	audioPlayer.play("VLC", "beyond the horizon.vlc");
	audioPlayer.play("avi", "beyond the horizon.avi");
	return 0;
}