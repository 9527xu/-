#pragma once
#include<iostream>
using namespace std;
class IAdvancedMediaPlayer
{
public:
	virtual void playVlc(string fileName)=0;
	virtual void playMp4(string fileName)=0;
};