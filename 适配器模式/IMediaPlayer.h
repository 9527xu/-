#pragma once
#include<iostream>
using namespace std;
class IMediaPlayer
{
public:
	virtual void play(string audioType, string fileName)=0;
};
