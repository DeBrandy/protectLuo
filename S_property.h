#pragma once
#include "T_Sprite.h"
class S_property :
	public T_Sprite
{
private:
	int blood;		//道具血量
	int bloodh = 0;
	boolean hurt;	//是否收到攻击
	
public:
	S_property(wstring imgPath, int frameWidth, int frameHeight);
	~S_property();

	void Initiate(SPRITEINFO spInfo, PROPERTY pInfo);
	void setBloodh(int h) { bloodh = bloodh+h; }
	void sethurt(boolean h) { hurt = h; }
	int getBloodh() { return bloodh; }
	int getBlood() { return blood; }
	boolean gethurt() { return hurt; }
};

