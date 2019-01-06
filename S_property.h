#pragma once
#include "T_Sprite.h"
class S_property :
	public T_Sprite
{
private:
	int blood;		//����Ѫ��
	int bloodh = 0;
	boolean hurt;	//�Ƿ��յ�����
	
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

