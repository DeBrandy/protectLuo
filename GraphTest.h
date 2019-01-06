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
	int frame;					//第几帧出现
	int minfo;					//这个怪是哪一种
}NPC_INFO;

static  bool flagbg = true;						//设置背景音乐当前播放状态
static  bool flagbut = true;                    //设置按键音当前状态

class GraphTest :public T_Engine
{
private:
	//---------场景相关变量---------
	int wnd_width, wnd_height;			//游戏窗口宽高
	int scn_width, scn_height;			//场景宽高
	POINT mouse_pt;						//当前鼠标位置

	int frameCount = 0;             //帧计数器
	int MaxFrameCount = 6000;      //总帧数

	int frameTime = 0;             //倒数帧计数器


	//----------图片资源------------
	T_Graph* lifeImg;				//萝卜生命图片
	T_Graph* wavenumImg;			//菜单中总波数图片
	T_Graph* waveImg;				//菜单中当前波数图片
	T_Graph* blood1;				//满血
	T_Graph* blood0;				//空血
	T_Graph* time1;                 //倒数一秒
	T_Graph* time2;					//倒数两秒
	T_Graph* time3;					//倒数三秒
	T_Graph* time4;					//go
	T_Graph* start;					//开始
	T_Graph* pause;					//暂停
	T_Graph* luolife;				//萝卜生命的


	//----------菜单类对象-----------
	T_Menu t_menu;                  //游戏菜单类的对象
	MyMenu start_menu;              //主菜单的关于问号
	T_Menu about_menu;              //关于界面的菜单
	T_Menu screen_menu;				//关卡选择
	MyMenu setm_menu1;				//设置界面的音效菜单
	MyMenu setm_menu2;
	T_Menu setBack_menu;            //设置界面的返回菜单
	MyMenu main_menu;               //关卡选择界面的返回
	MyMenu set_menu;                //主菜单的设置
	MyMenu run_speed;				//运行界面的速度切换
	MyMenu run_start;				//运行界面的开始暂停
	MyMenu run_return;				//运行界面的返回
									//指针
	T_Menu* p_menu;
	T_Menu* p_aboutmenu;
	T_Menu* p_screenmenu;
	T_Menu* p_setBack_menu;
	T_Menu* p_start_menu;

	//----------音乐类对象-------------
	AudioDX ds;
	AudioDXBuffer bg_buffer;				//菜单背景音乐
	AudioDXBuffer button_click_buffer;		//鼠标点击音乐
	AudioDXBuffer button_move_buffer;		//鼠标移动音乐
	AudioDXBuffer runbg_buffer;				//游戏开始音乐

	//---------游戏其他类对象---------
	T_Scene* t_scence;					//游戏场景
	//T_Sprite* light;					//光晕
	T_Graph light;						//光晕
	bool lightflag = false;
	T_Sprite* playLuo;					//萝卜

	//----------游戏角色相关集合-------------
	static const int NPCNUM = 100;		//关卡最大怪物数
	vMonsterSet npc_set;				//NPC角色集合
	vSpriteSet light_set;              //光晕集合
	vMonsterSet waveNPC_set;			//每一波NPC角色集合
	vSpriteSet bomb_set;				//炮弹集合
	vSpriteSet explosion_set;			//爆炸效果集合
	sPropertySet proper_set;			//道具集合
	NPC_INFO NPCFrame[NPCNUM];			//怪物出现的帧数
	//----------动画帧序列---------
	static int Explosion_F[4];			//爆炸效果帧序列
	static int Monster_M[6];			//怪物帧序列
	static int Monster_L[11];
	static int luo_lF[100];				//好萝卜的
	static int luo_eF[9];				//被吃了的萝卜

	//----------关卡常量----------
	int guanNum = 4;					//总关卡数
	int guan = 0;						//当前关卡
	int guans = 0;						//关卡的flag
	int speedf = 1;						//速度的flag
	int pnum;							//道具数量
	int px[35];							//道具的x坐标
	int py[35];							//道具的y坐标
	int lifeNum = 10;					//总生命值
	int life = 10;						//当前生命值
	int price = 500;					//当前金币数
	int monsterBegin = 0;                   //怪物方向位置
	int monsterDir[42] = { DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_UP,DIR_RIGHT,
		DIR_UP,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,
		DIR_RIGHT,DIR_UP,DIR_LEFT,DIR_UP,DIR_RIGHT,DIR_DOWN,DIR_LEFT,DIR_DOWN,DIR_RIGHT,DIR_UP,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,
		DIR_LEFT,DIR_UP,DIR_LEFT,DIR_UP,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_DOWN,DIR_RIGHT,DIR_UP };
	
	int monster = 5;					//每一波怪物数
	int waveNum[4] = { 6,8,10,10 };		//每一关总波数
	int stationX[4] = { 170,240,200,495 };               //每一关入口X     
	int stationY[4] = { 133,395,420,483 };              //每一关入口Y
	int endX[4] = { 890,890,960,820 };               //每一关出口X     
	int endY[4] = { 133,500,420,133 };              //每一关出口Y

	int levelNPCNum = 0;				//当前关卡怪物数
	int waveTime = 8000;				//每一波的间隔时间
	int NPCTime = 1000;					//加载NPC的间隔时间
	
	static TOWERS tInfo[6];				//炮塔信息
	static MONSTER mInfo[8];			//怪物信息
	static PROPERTY pInfo[10];			//道具信息
	static SPRITEINFO lInfo[4];         //光晕信息
	long lastMonsterTime;                //上一个怪物的加载时间
	long thisMonsterTime;                //当前怪物的加载时间

	//----------资源加载-------------
	void LoadWaveNPC();						//加载固定个数的固定怪物     **
	void LoadMap(char* path);				//加载地图
	void LoadPlayer();						//加载炮塔
	void LoadLuo(int x,int y);				//加载萝卜
	void LoadProp(int t, int x, int y);		//加载道具
	void loadMenu();						//加载菜单
	void setMenu(T_Menu* menu, int w, int h, wstring path, wstring item[]);			//菜单值的设定
	void LoadSkill();						//加载技能
	void LoadMusic();			//加载音乐
	void LoadExplosion(int x, int y);	//加载爆炸效果
	void LoadBomb();		//加载子弹
	void LoadImg();			//加载图片
	void drawBlood(HDC hdc);		//画道具血量进度条
	void drawMBlood(HDC hdc, int rx, int ry, MonsterSprite* npc);       //画怪物血量进度条

	//---------更新---------------------
	void updatePlayerLife();	//更新萝卜生命
	void updateAnimation();		//更新炮塔帧序列
	void updateNPCPos();		//更新NPC位置         **
	void updateBombPos();		//更新子弹位置
	void updateLuo();			//更新萝卜状态
	void updatePlayerLevel();	//更新炮塔等级
	void updateNPCInfo();		//更新每一波怪物信息  **
	void updateNPCLife();       //更新怪物状态
	void updateProLife();		//更新道具信息
	void stopClickMusic(AudioDXBuffer button_click_buffer, AudioDXBuffer button_move_buffer);
	//----------关卡----------------
	void LoadGuan(int g);			//初始关卡信息
	void countDown(HDC hdc);

	//测试
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