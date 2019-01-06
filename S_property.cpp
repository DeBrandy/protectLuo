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
	SetPosition(spInfo.X, spInfo.Y);	// ��ɫ����
	Visible = spInfo.Visible;			// ��ɫ�Ƿ�ɼ�
	//active = spInfo.Active;			// ��ɫ״̬���Ƿ��ƶ���
	dead = spInfo.Dead;					// ��ɫ����״̬
	score = spInfo.Score;				// ��������� 
	frameRatio = spInfo.Ratio;			// ֡ͼƬ���ű�(����1ԭʼ������1�Ŵ�С��1��С)
	frameRotate = spInfo.Rotation;		// ֡ͼƬ�Ƿ���ת�任(TRANSFERֵ֮һ)
	frameAlpha = spInfo.Alpha;			// ֡ͼƬ͸����
	blood = pInfo.life;					// ���ߵ�����ֵ
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