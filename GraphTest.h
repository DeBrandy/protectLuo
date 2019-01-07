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
typedef vector<T_Menu*> vMenuSet;

/*typedef struct
{
	int x;
	int y;
	T_Graph tower;
	int fcount;
	LPCTSTR imgName;			// ����ͼƬ
	double	Speed[3];			// ��������
	int		Harm[3];			// �����˺�ֵ
	int		Range[3];			// ����������Χ
	int     type;				// ������������
	int     PriceBuy[3];		// ��������۸�
	int     PriceSell[3];		// ���������۸�
	int     Dcrease;			// ������ɵļ�����
	float   ratio;				// ͼƬ���ű���
}TOWERS;*/
struct NPC
{
	int x;
	int y;
	float ratio;
	int fcount;
	int dir;
	LPCTSTR name;
	T_Graph npc;
	int speed;
};
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

	int frameCount = 0;					//֡������
	int MaxFrameCount = 4000;			//��֡��
	int frames = 0;						//����֡����

	int frameTime = 0;             //����֡������
	int monsterDead = 0;           //������������

	int skillf;						//������1������2

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
	T_Graph* money[11];				//Ǯ��ͼƬ
	T_Graph* jin;                   //���ܲ�
	T_Graph* yin;					//���ܲ�
	T_Graph* tong;					//ͭ�ܲ�
	T_Graph* wang;                  //��һ��
	T_Graph* zhang;					//�ź�
	T_Graph* bai;					//������

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
	MyMenu win_menu;				//��Ϸ�ɹ�
	MyMenu over_menu;				//��Ϸʧ��
	MyMenu s_ice;					//��������
	MyMenu s_slow;					//���ټ���
	MyMenu s_del;					//ɾ������
	MyMenu s_life;					//���Ȱ�����

	MyMenu choosefan;
	MyMenu choosebluestar;
	MyMenu choosebottle;
	MyMenu chooseshit;
	MyMenu choosesnow;
	MyMenu choosesun;
	MyMenu chooselevel;
									//ָ��
	T_Menu* p_menu;
	T_Menu* p_aboutmenu;
	T_Menu* p_screenmenu;
	T_Menu* p_setBack_menu;
	T_Menu* p_start_menu;
	MyMenu* p_winmenu;
	MyMenu* p_overmenu;

	//----------���������-------------
	AudioDX ds;
	AudioDXBuffer bg_buffer;				//�˵���������
	AudioDXBuffer button_click_buffer;		//���������
	AudioDXBuffer button_move_buffer;		//����ƶ�����
	AudioDXBuffer runbg_buffer;				//��Ϸ��ʼ����

	//---------��Ϸ���������---------
	T_Scene* t_scence;					//��Ϸ����
	T_Graph light;						//����
	bool lightflag = false;
	T_Sprite* playLuo;					//�ܲ�

	//----------��Ϸ��ɫ��ؼ���-------------
	static const int NPCNUM = 100;		//�ؿ���������
	vMonsterSet npc_set;				//NPC��ɫ����
	vMonsterSet waveNPC_set;			//ÿһ��NPC��ɫ����
	vSpriteSet light_set;              //���μ���
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

	vSpriteSet player;				//��Ϸ���
	vSpriteSet bomb;					//��Ϸ���

	vMenuSet submenu;

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
	int luoType = 1;                        //�ܲ��ȼ������ܲ���1�����ܲ���0��ͭ�ܲ���-1
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
	

	static LPCTSTR tower_files[6];
	TOWERS tower;
	static float rand_size[5];
	static int rand_speed[5];
	static LPCTSTR npc_file;
	static int NPC_WIDTH;
	static int NPC_HEIGHT;
	vector<NPC> vecNpc;
	static int NPC_NUM;
	
	static int FAN1[4];
	static int FAN2[4];
	static int FAN3[4];
	static int FANB1[5];
	static int FANB2[5];
	static int FANB3[5];

	static int BS1[3];
	static int BS2[3];
	static int BS3[3];
	static int BSB1[7];
	static int BSB2[7];
	static int BSB3[7];

	static int B1[4];
	static int B2[4];
	static int B3[4];
	static int BB1[5];
	static int BB2[5];
	static int BB3[5];

	static int S1[3];
	static int S2[3];
	static int S3[3];
	static int SB1[3];
	static int SB2[3];
	static int SB3[3];

	static int SN1[3];
	static int SN2[3];
	static int SN3[3];
	static int SNB1[3];
	static int SNB2[3];
	static int SNB3[3];

	static int SUN1[3];
	static int SUN2[3];
	static int SUN3[3];
	static int SUNB1[3];
	static int SUNB2[3];
	static int SUNB3[3];

	int towerflag;
	int towerkind = 1;
	int run = 0;

	int up = 0;
	int emp = 0;
	int move = 1;
	int towerlevel = 1;
	int bomblevel = 1;
	int menu = 0;
	int up1 = 0;
	int up2 = 0;

	//----------��Դ����-------------
	void LoadWaveNPC();		//���ع̶������Ĺ̶�����     **
	void LoadMap(char* path);			//���ص�ͼ
	void LoadPlayer(int x, int y);		//��������
	void LoadLuo(int x, int y);			//�����ܲ�
	void LoadProp(int t, int x, int y);		//���ص���
	void loadMenu();		//���ز˵�
	void setMenu(T_Menu* menu, int w, int h, wstring path, wstring item[]);			//�˵�ֵ���趨
	void setMenuT(MyMenu* menu, int w, int h, wstring path, wstring path1, wstring item[]);			//�˵�ֵ���趨
	void LoadSkill();		//���ؼ���
	void LoadMusic();		//��������
	void LoadExplosion(int x, int y);	//���ر�ըЧ��
	void LoadBomb(int x, int y);		//�����ӵ�
	void LoadImg();			//����ͼƬ
	void drawBlood(HDC hdc,int i);		//������Ѫ��������
	void drawMBlood(HDC hdc, int rx, int ry, MonsterSprite* npc);       //������Ѫ��������
	void drawPrice(HDC hdc, int m, int x, int y);		//��Ǯ
	void loadTowerMenu(int x, int y);
	void loadUpdateMenu(int x, int y);

	//---------����---------------------
	void updatePlayerLife();	
	void updateAnimation();		//��������֡����
	void updateNPCPos();		//����NPCλ��         **
	void updateBombPos(T_Sprite* ts,int dir);		//�����ӵ�λ��
	void updateLuo();			//�����ܲ�״̬
	void updatePlayerLevel();	//���������ȼ�
	void updateNPCInfo();		//����ÿһ��������Ϣ  **
	void updateNPCLife(HDC hdc);       //���¹���״̬
	void updateProLife(HDC hdc=0);		//���µ�����Ϣ
	void winState();                    //ʤ���ж�
	void stopClickMusic(AudioDXBuffer button_click_buffer, AudioDXBuffer button_move_buffer);
	void skillIce();
	void skillSlow();
	void skillDel();
	void skillLife();

	//----------�ؿ�----------------
	void LoadGuan(int g);			//��ʼ�ؿ���Ϣ
	void countDown(HDC hdc);
	void ClearGuan();

	void UpdateTowerLevel( T_Sprite* t);
	void UpdateBombLevel( T_Sprite* t);

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