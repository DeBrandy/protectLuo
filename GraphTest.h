#pragma once
#include "T_Engine.h"
#include "T_Menu.h"
#include "T_AI.h"
#include "T_Scene.h"
#include "MyMenu.h"
#include "S_property.h"
#include "MonsterSprite.h"

typedef vector<MonsterSprite*> vMonsterSet;
typedef vector<S_property*> sPropertySet;
typedef vector<T_Sprite*> vSpriteSet;


typedef struct
{
	int frame;					//�ڼ�֡����
	int minfo;					//���������һ��
}NPC_INFO;

static  bool flagbg = true;						//���ñ������ֵ�ǰ����״̬
static  bool flagbut = true;                    //���ð�������ǰ״̬

class GraphTest :public T_Engine
{
private:
	//---------������ر���---------
	int wnd_width, wnd_height;			//��Ϸ���ڿ��
	int scn_width, scn_height;			//�������
	POINT mouse_pt;						//��ǰ���λ��

	int frameCount = 0;             //֡������
	int MaxFrameCount = 6000;      //��֡��

	int frameTime = 0;             //����֡������


	//----------ͼƬ��Դ------------
	T_Graph* lifeImg;				//�ܲ�����ͼƬ
	T_Graph* wavenumImg;			//�˵����ܲ���ͼƬ
	T_Graph* waveImg;				//�˵��е�ǰ����ͼƬ
	T_Graph* blood1;				//��Ѫ
	T_Graph* blood0;				//��Ѫ
	T_Graph* time1;                 //����һ��
	T_Graph* time2;					//��������
	T_Graph* time3;					//��������
	T_Graph* time4;					//go
	T_Graph* start;					//��ʼ
	T_Graph* pause;					//��ͣ
	T_Graph* luolife;				//�ܲ�������


	//----------�˵������-----------
	T_Menu t_menu;                  //��Ϸ�˵���Ķ���
	MyMenu start_menu;              //���˵��Ĺ����ʺ�
	T_Menu about_menu;              //���ڽ���Ĳ˵�
	T_Menu screen_menu;				//�ؿ�ѡ��
	MyMenu setm_menu1;				//���ý������Ч�˵�
	MyMenu setm_menu2;
	T_Menu setBack_menu;            //���ý���ķ��ز˵�
	MyMenu main_menu;               //�ؿ�ѡ�����ķ���
	MyMenu set_menu;                //���˵�������
	MyMenu run_speed;				//���н�����ٶ��л�
	MyMenu run_start;				//���н���Ŀ�ʼ��ͣ
	MyMenu run_return;				//���н���ķ���
									//ָ��
	T_Menu* p_menu;
	T_Menu* p_aboutmenu;
	T_Menu* p_screenmenu;
	T_Menu* p_setBack_menu;
	T_Menu* p_start_menu;

	//----------���������-------------
	AudioDX ds;
	AudioDXBuffer bg_buffer;				//�˵���������
	AudioDXBuffer button_click_buffer;		//���������
	AudioDXBuffer button_move_buffer;		//����ƶ�����
	AudioDXBuffer runbg_buffer;				//��Ϸ��ʼ����

	//---------��Ϸ���������---------
	T_Scene* t_scence;					//��Ϸ����
	//T_Sprite* light;					//����
	T_Graph light;						//����
	bool lightflag = false;
	T_Sprite* playLuo;					//�ܲ�

	//----------��Ϸ��ɫ��ؼ���-------------
	static const int NPCNUM = 100;		//�ؿ���������
	vMonsterSet npc_set;				//NPC��ɫ����
	vSpriteSet light_set;              //���μ���
	vMonsterSet waveNPC_set;			//ÿһ��NPC��ɫ����
	vSpriteSet bomb_set;				//�ڵ�����
	vSpriteSet explosion_set;			//��ըЧ������
	sPropertySet proper_set;			//���߼���
	NPC_INFO NPCFrame[NPCNUM];			//������ֵ�֡��
	//----------����֡����---------
	static int Explosion_F[4];			//��ըЧ��֡����
	static int Monster_M[6];			//����֡����
	static int Monster_L[11];
	static int luo_lF[100];				//���ܲ���
	static int luo_eF[9];				//�����˵��ܲ�

	//----------�ؿ�����----------
	int guanNum = 4;					//�ܹؿ���
	int guan = 0;						//��ǰ�ؿ�
	int guans = 0;						//�ؿ���flag
	int speedf = 1;						//�ٶȵ�flag
	int pnum;							//��������
	int px[35];							//���ߵ�x����
	int py[35];							//���ߵ�y����
	int lifeNum = 10;					//������ֵ
	int life = 10;						//��ǰ����ֵ
	int price = 500;					//��ǰ�����
	int monsterBegin = 0;                   //���﷽��λ��
	int monsterDir[42] = { DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_UP,DIR_RIGHT,
		DIR_UP,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,
		DIR_RIGHT,DIR_UP,DIR_LEFT,DIR_UP,DIR_RIGHT,DIR_DOWN,DIR_LEFT,DIR_DOWN,DIR_RIGHT,DIR_UP,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,
		DIR_LEFT,DIR_UP,DIR_LEFT,DIR_UP,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_UP };
	
	int monster = 5;					//ÿһ��������
	int waveNum[4] = { 6,8,10,10 };		//ÿһ���ܲ���
	int stationX[4] = { 170,240,200,495 };               //ÿһ�����X     
	int stationY[4] = { 133,395,420,483 };              //ÿһ�����Y
	int endX[4] = { 890,890,960,820 };               //ÿһ�س���X     
	int endY[4] = { 133,500,420,133 };              //ÿһ�س���Y

	int levelNPCNum = 0;				//��ǰ�ؿ�������
	int waveTime = 8000;				//ÿһ���ļ��ʱ��
	int NPCTime = 1000;					//����NPC�ļ��ʱ��
	
	static TOWERS tInfo[6];				//������Ϣ
	static MONSTER mInfo[8];			//������Ϣ
	static PROPERTY pInfo[10];			//������Ϣ
	static SPRITEINFO lInfo[4];         //������Ϣ
	long lastMonsterTime;                //��һ������ļ���ʱ��
	long thisMonsterTime;                //��ǰ����ļ���ʱ��

	//----------��Դ����-------------
	void LoadWaveNPC();						//���ع̶������Ĺ̶�����     **
	void LoadMap(char* path);				//���ص�ͼ
	void LoadPlayer();						//��������
	void LoadLuo(int x,int y);				//�����ܲ�
	void LoadProp(int t, int x, int y);		//���ص���
	void loadMenu();						//���ز˵�
	void setMenu(T_Menu* menu, int w, int h, wstring path, wstring item[]);			//�˵�ֵ���趨
	void LoadSkill();						//���ؼ���
	void LoadMusic();			//��������
	void LoadExplosion(int x, int y);	//���ر�ըЧ��
	void LoadBomb();		//�����ӵ�
	void LoadImg();			//����ͼƬ
	void drawBlood(HDC hdc);		//������Ѫ��������
	void drawMBlood(HDC hdc, int rx, int ry, MonsterSprite* npc);       //������Ѫ��������

	//---------����---------------------
	void updatePlayerLife();	//�����ܲ�����
	void updateAnimation();		//��������֡����
	void updateNPCPos();		//����NPCλ��         **
	void updateBombPos();		//�����ӵ�λ��
	void updateLuo();			//�����ܲ�״̬
	void updatePlayerLevel();	//���������ȼ�
	void updateNPCInfo();		//����ÿһ��������Ϣ  **
	void updateNPCLife();       //���¹���״̬
	void updateProLife();		//���µ�����Ϣ
	void stopClickMusic(AudioDXBuffer button_click_buffer, AudioDXBuffer button_move_buffer);
	//----------�ؿ�----------------
	void LoadGuan(int g);			//��ʼ�ؿ���Ϣ
	void countDown(HDC hdc);

	//����
public:
	GraphTest(HINSTANCE hInstance, LPCTSTR szWindowClass, LPCTSTR szTitle,
		WORD Icon = NULL, WORD SmIcon = NULL,
		int iWidth = 800, int iHeight = 600);
	virtual ~GraphTest(void);
	void GameInit();
	void GameLogic();
	void GameEnd();
	void GamePaint(HDC hdc);
	void GameKeyAction(int ActionType = KEY_SYS_NONE);
	void GameMouseAction(int x, int y, int ActionType);
	
};