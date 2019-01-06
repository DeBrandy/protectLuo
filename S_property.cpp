#include "S_property.h"

S_property::S_property(wstring imgPath, int frameWidth, int frameHeight)
	:T_Sprite(imgPath,frameWidth,frameHeight)
{
}


S_property::~S_property()
{
}

void S_property::Initiate(SPRITEINFO spInfo, PROPERTY pInfo)
{
	SetPosition(spInfo.X, spInfo.Y);	// 角色坐标
	Visible = spInfo.Visible;			// 角色是否可见
	//active = spInfo.Active;			// 角色状态（是否移动）
	dead = spInfo.Dead;					// 角色死亡状态
	score = spInfo.Score;				// 奖励金币数 
	frameRatio = spInfo.Ratio;			// 帧图片缩放比(等于1原始，大于1放大，小于1缩小)
	frameRotate = spInfo.Rotation;		// 帧图片是否旋转变换(TRANSFER值之一)
	frameAlpha = spInfo.Alpha;			// 帧图片透明度
	blood = pInfo.life;					// 道具的生命值
	if (frameRatio>0)
	{
		colideWidth = GetRatioSize().cx;
		colideHeight = GetRatioSize().cy;
	}
	else
	{
		colideWidth = (int)GetWidth();
		colideHeight = (int)GetHeight();
	}
}