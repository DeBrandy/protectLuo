#include "GraphTest.h"
int GraphTest::FAN1[4] = { 7,8,9,10 };
int GraphTest::FAN2[4] = { 14,15,16,17 };
int GraphTest::FAN3[4] = { 21,22,23,24 };
int GraphTest::FANB1[5] = { 28,29,30,31,32 };
int GraphTest::FANB2[5] = { 35,36,37,38,39 };
int GraphTest::FANB3[5] = { 42,43,44,45,46 };


int GraphTest::B1[4] = { 7,8,9,10 };
int GraphTest::B2[4] = { 14,15,16,17 };
int GraphTest::B3[4] = { 21,22,23,24 };
int GraphTest::BB1[5] = { 35,36,37,38,39 };
int GraphTest::BB2[5] = { 42,43,44,45,46 };
int GraphTest::BB3[5] = { 49,50,51,52,53 };

int GraphTest::BS1[3] = { 7,8,9 };
int GraphTest::BS2[3] = { 14,15,16 };
int GraphTest::BS3[3] = { 21,22,23 };
int GraphTest::BSB1[7] = { 35,36,37,38,39,40,41 };
int GraphTest::BSB2[7] = { 42,43,44,45,46,47,48 };
int GraphTest::BSB3[7] = { 49,50,51,52,53,54,55 };


int GraphTest::S1[3] = { 7,8,9 };
int GraphTest::S2[3] = { 14,15,16 };
int GraphTest::S3[3] = { 21,22,23 };
int GraphTest::SB1[3] = { 35,36,37 };
int GraphTest::SB2[3] = { 42,43,44 };
int GraphTest::SB3[3] = { 49,50,51 };


int GraphTest::SN1[3] = { 7,8,9 };
int GraphTest::SN2[3] = { 14,15,16 };
int GraphTest::SN3[3] = { 21,22,23 };
int GraphTest::SNB1[3] = { 35,36,37 };
int GraphTest::SNB2[3] = { 42,43,44 };
int GraphTest::SNB3[3] = { 49,50,51 };


int GraphTest::SUN1[3] = { 7,8,9 };
int GraphTest::SUN2[3] = { 14,15,16 };
int GraphTest::SUN3[3] = { 21,22,23 };
int GraphTest::SUNB1[3] = { 35,36,37 };
int GraphTest::SUNB2[3] = { 42,43,44 };
int GraphTest::SUNB3[3] = { 49,50,51 };
LPCTSTR GraphTest::tower_files[6] = { L".\\res\\tower\\bottle.png",L".\\res\\tower\\sun.png",L".\\res\\tower\\bluestaratt.png",L".\\res\\tower\\fan.png", L".\\res\\tower\\shit.png",L".\\res\\tower\\snow.png" };

MONSTER GraphTest::mInfo[8] = {
	// x   y  ����ͼƬ   �����ٶ�	���ٺ��ٶ�	��������ֵ	�Ƿ�ɼ� ���ｱ����	ͼƬ���ű���  ��ת ���� ���ͼ��ײ����
	{ 0,0,L"res\\monster\\boss.png", 1 , 1 , 12 ,true , 30 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\fat1.png", 1 , 1 , 9 ,true , 168 , 0.5 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\fat2.png", 1, 1 , 9 ,true , 168 , 0.5 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\flyblack.png", 3 , 3 , 3 ,true , 28 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\flyyellow.png", 3 , 3 , 3 ,true , 28 , 0.6 ,TRANS_NONE, DIR_RIGHT,30 },
	{ 0,0, L"res\\monster\\smallpink.png", 2 , 2 , 6 ,true , 28 , 0.8 , TRANS_NONE,DIR_RIGHT,35 },
	{ 0,0, L"res\\monster\\smallpurple.png", 2 ,2 , 6 ,true , 28 , 0.8 , TRANS_NONE,DIR_RIGHT,35 },
	{ 0,0, L"res\\monster\\smallred.png", 2 , 2 , 6 ,true , 28 ,0.6 ,TRANS_NONE, DIR_RIGHT,32 }
};
SPRITEINFO GraphTest::lInfo[4] = {
	{ 170, 133,DIR_DOWN,1,1,1,0,1,0,255,1,1 },
	{ 240, 395,DIR_DOWN,1,1,1,0,1,0,255,1,1 },
	{ 200, 420,DIR_DOWN,1,1,1,0,1,0,255,1,1 },
	{ 495, 483,DIR_DOWN,1,1,1,0,1,0,255,1,1 },
};
PROPERTY GraphTest::pInfo[10] = {
	// ����ͼƬ   ��������ֵ    ���߽�����   ͼƬ���ű���
	{ L"res\\property\\0.png",2500,2500,0.8},
	{ L"res\\property\\1.png",1300,150,0.8 },
	{ L"res\\property\\2.png",670,75,0.6 },
	{ L"res\\property\\3.png",1300,150,0.9 },
	{ L"res\\property\\4.png",2500,268,0.8 },
	{ L"res\\property\\5.png",670,75,0.5 },
	{ L"res\\property\\6.png",1300,1000,0.8 },
	{ L"res\\property\\7.png",1300,150,1 },
	{ L"res\\property\\8.png",670,75,0.7 },
	{ L"res\\property\\9.png",2500,268,1 },
};
int GraphTest::Explosion_F[4] = {0,1,2,3};
int GraphTest::Monster_M[6] = { 0,0,0,1,1,1 };
int GraphTest::Monster_L[11] = { 0,0,0,0,1,1,1,1,1,1,1 };
int GraphTest::luo_lF[100]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,2,2,3,3,3,4,4,4,0,0,0,1,1,1,2,2,2,3,3,3,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,7,8,9,10,11,12,13,13 };
int GraphTest::luo_eF[9]{ 14,15,16,17,18,19,19,20,20 };
GraphTest::GraphTest(HINSTANCE hInstance, LPCTSTR szWindowClass, LPCTSTR szTitle,
	WORD Icon, WORD SmIcon, int iWidth, int iHeight) :T_Engine(hInstance,
		szWindowClass, szTitle, Icon, SmIcon, iWidth, iHeight)
{
	srand((unsigned)time(NULL));
	t_scence = new T_Scene();
	wnd_width = iWidth;
	wnd_height = iHeight;
}

GraphTest::~GraphTest()
{
}

void GraphTest::GameInit()
{
	LoadMusic();
	loadMenu();
	LoadImg();
	
}

void GraphTest::GameLogic()
{
	if (guans != guan)
	{
		guans = guan;
		LoadGuan(guan);
		loadTowerMenu(50, 50);
		loadUpdateMenu(400, 50);
	}
	if (GameState == GAME_RUN)
	{
		if (frameTime < 81)
		{
			frameTime++;
		}
		if (frameTime == 81)           //����������ʼ��ʱ
		{
			if (frameCount < MaxFrameCount - 1)
			{
				frameCount++;
			}
		}
		
		
			/*player->SetPosition(mouse_pt.x, mouse_pt.y);
			bomb->SetPosition(mouse_pt.x, mouse_pt.y);*/
		
			if (bomb.size()>0)
			{
				vSpriteSet::iterator p;
				for (p = bomb.begin(); p != bomb.end(); p++)
				{

					if ((*p)->IsVisible() == true)
					{
						updateBombPos((*p), (*p)->GetDir());

						(*p)->LoopFrame();
					}

				}
			}

			if (player.size() >0)
			{
				vSpriteSet::iterator p1;
				for (p1 = player.begin(); p1 != player.end(); p1++)
				{

					if ((*p1)->IsVisible() == true)
					{
						(*p1)->LoopFrame();
					}

				}
			}
		LoadWaveNPC();
		updateNPCPos();
		updateNPCLife();
		updateProLife();
		updateAnimation();
		updateLuo();
	}
}

void GraphTest::GameEnd()
{
	
}

void GraphTest::GamePaint(HDC hdc)
{
	if (GameState == GAME_START)
	{
		p_menu->DrawMenu(hdc,1,255,true);
		set_menu.DrawMenu(hdc, 0.5);
		start_menu.DrawMenu(hdc,0.5);
		
	}
	else if (GameState == GAME_SCREEN)
	{
		p_screenmenu->DrawMenu(hdc,1,0,255,true);
		main_menu.DrawMenu(hdc,0.7);
	}
	else if (GameState == GAME_ABOUT)
	{
		p_aboutmenu->DrawMenu(hdc);

		//T_Graph::PaintBlank(hdc, 360, 50, 400, 360, Color::Green, 80);

		RectF infoRec;
		infoRec.X = 0.00;
		infoRec.Y = 180.00;
		infoRec.Width = (float)wnd_width;
		infoRec.Height = (float)wnd_height/2-30 ;

		LPCTSTR info = L" ���:6\n\n 8000116024  ������\n\n8000116120  ��һ��\n\n8000116127  �� ��";
		T_Graph::PaintText(hdc, infoRec, info, 25, L"������Ů����W5", Color(255, 252, 231), FontStyleBold, StringAlignmentCenter);
	}
	else if (GameState == GAME_SETTING)
	{
		p_setBack_menu->DrawMenu(hdc, 1, 255, true);
		RectF infoRec;
		infoRec.X = 250.00;
		infoRec.Y = 110.00;
		infoRec.Width = (float)wnd_width;
		infoRec.Height = (float)wnd_height / 2 - 30;

		LPCTSTR info = L" ��������:";
		T_Graph::PaintText(hdc, infoRec, info, 25, L"������Ů����W5", Color(255, 252, 231), FontStyleBold, StringAlignmentNear);

		infoRec.X = 250.00;
		infoRec.Y = 250.00;
		infoRec.Width = (float)wnd_width;
		infoRec.Height = (float)wnd_height / 2 - 30;

		info = L" ��������:";
		T_Graph::PaintText(hdc, infoRec, info, 25, L"������Ů����W5", Color(255, 252, 231), FontStyleBold, StringAlignmentNear);
		setm_menu1.DrawMenu(hdc);
		setm_menu2.DrawMenu(hdc);
	}
	else if (GameState == GAME_RUN)
	{
		switch (guan)
		{
		case 1:
			t_scence->Draw(hdc, 0, 0);
			drawBlood(hdc);
			break;
		case 2:
			t_scence->Draw(hdc, 0, 0);
			break;
		case 3:
			t_scence->Draw(hdc, 0, 0);
			break;
		case 4:
			t_scence->Draw(hdc, 0, 0);
			break;
		}
		if (lightflag)
		{
			if (frameCount % 6<3)
				light.PaintRegion(light.GetBmpHandle(), hdc, lInfo[guan - 1].X, lInfo[guan - 1].Y, 0, 0, 98, 92, 1, TRANS_NONE, 200);
			else
				light.PaintRegion(light.GetBmpHandle(), hdc, lInfo[guan - 1].X, lInfo[guan - 1].Y, 98, 0, 98, 92, 1, TRANS_NONE, 200);
		}
		countDown(hdc);
		vMonsterSet::iterator p;
		for (p = npc_set.begin(); p != npc_set.end(); p++)
		{
			
			if ((*p)->IsVisible() == true)
			{
				//(*p)->Draw(hdc);
				drawMBlood(hdc,(*p)->GetX()+5, (*p)->GetY()+5,*p);
			}
				
		}

		RectF infoRec;
		infoRec.X = 540;
		infoRec.Y = 11;
		infoRec.Width = 40;
		infoRec.Height = 40;
		LPCTSTR info = T_Util::int_to_wstring(waveNum[guan - 1]);
		T_Graph::PaintText(hdc, infoRec, info,18, L"������Ů����W5", Color::White, FontStyleBold, StringAlignmentCenter);
		info = T_Util::int_to_wstring(frameCount / (MaxFrameCount / waveNum[guan - 1]) + 1);
		infoRec.X = 490;
		infoRec.Y = 11;
		T_Graph::PaintText(hdc, infoRec, info, 18, L"������Ů����W5", Color::White, FontStyleBold, StringAlignmentCenter);
		info = T_Util::int_to_wstring(price);
		infoRec.X = 170;
		infoRec.Y = 11;
		infoRec.Width = 60;
		infoRec.Height = 40;
		T_Graph::PaintText(hdc, infoRec, info, 18, L"������Ů����W5", Color::White, FontStyleBold, StringAlignmentCenter);

		luolife->PaintRegion(luolife->GetBmpHandle(), hdc, playLuo->GetX() + 70, playLuo->GetY() + 15, 0, (life - 1) * 37, 74, 36, 0.8);

		run_speed.DrawMenu(hdc,0.8);
		run_start.DrawMenu(hdc,0.8);
		run_return.DrawMenu(hdc,0.8);

		choosefan.DrawMenu(hdc,0.8);
		choosebluestar.DrawMenu(hdc);
		choosebottle.DrawMenu(hdc);
		chooseshit.DrawMenu(hdc);
		choosesnow.DrawMenu(hdc);
		choosesun.DrawMenu(hdc);
		chooselevel.DrawMenu(hdc);
	}
}

void GraphTest::GameKeyAction(int ActionType)
{
	if (GameState == GAME_START)
	{
		if (GetAsyncKeyState(VK_UP) < 0)
			p_menu->MenuKeyDown(VK_UP);
		if (GetAsyncKeyState(VK_DOWN) < 0)
			p_menu->MenuKeyDown(VK_DOWN);
		if (GetAsyncKeyState(VK_LEFT) < 0)
			p_menu->MenuKeyDown(VK_LEFT);
		if (GetAsyncKeyState(VK_RIGHT) < 0)
			p_menu->MenuKeyDown(VK_RIGHT);
		if (GetAsyncKeyState(VK_RETURN) < 0)
		{
			if (p_menu->GetMenuIndex() >= 0)
			{
				switch (p_menu->GetMenuIndex())
				{
				case 0:
					GameState = GAME_SCREEN;			
					break;
				case 1:
					SendMessage(m_hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
					break;
				}
			}
		}
	}
	else if (GameState == GAME_ABOUT)
	{
		if (GetAsyncKeyState(VK_UP) < 0)
			p_aboutmenu->MenuKeyDown(VK_UP);
		if (GetAsyncKeyState(VK_DOWN) < 0)
			p_aboutmenu->MenuKeyDown(VK_DOWN);
		if (GetAsyncKeyState(VK_LEFT) < 0)
			p_aboutmenu->MenuKeyDown(VK_LEFT);
		if (GetAsyncKeyState(VK_RIGHT) < 0)
			p_aboutmenu->MenuKeyDown(VK_RIGHT);
		if (GetAsyncKeyState(VK_RETURN) < 0)
		{
			if (p_aboutmenu->GetMenuIndex() >= 0)
			{
				switch (p_aboutmenu->GetMenuIndex())
				{
				case 0:
					GameState = GAME_START;
					break;
				case 1:
					SendMessage(m_hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
					break;
				}
			}
		}
	}
	else if (GameState == GAME_RUN) {
		
		
	}
}

void GraphTest::GameMouseAction(int x, int y, int ActionType)
{
	wstring setItems[] = { L" " };
	if (GameState == GAME_START)
	{
		if (ActionType == MOUSE_MOVE&&GameState != GAME_RUN)
		{
			p_menu->MenuMouseMove(x, y);
			start_menu.MenuMouseMove(x, y);
			set_menu.MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = p_menu->MenuMouseClick(x, y);
			int aboutindex = start_menu.MenuMouseClick(x, y);
			int setindex = set_menu.MenuMouseClick(x, y);
			if (index >= 0)
			{
				switch (index)
				{
				case 0:
					GameState = GAME_SCREEN;
					break;
				case 1:
					SendMessage(m_hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
					break;
				}
			}
			if(aboutindex==0)  GameState = GAME_ABOUT;
			//����������(С��˿��)
			if (setindex == 0)  GameState = GAME_SETTING;
		}
	}
	else if (GameState == GAME_SCREEN)
	{
		if (ActionType == MOUSE_MOVE&&GameState != GAME_RUN)
		{
			p_screenmenu->MenuMouseMove(x, y);
			main_menu.MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = p_screenmenu->MenuMouseClick(x, y);
			int mainindex = main_menu.MenuMouseClick(x, y);
			if (index >= 0)
			{
				switch (index)
				{
				case 0:
					GameState = GAME_RUN;
					guan = 1;		
					break;
				case 1:
					GameState = GAME_RUN;
					guan = 2;
					break;
				case 2:
					GameState = GAME_RUN;
					guan = 3;
					break;
				case 3:
					GameState = GAME_RUN;
					guan = 4;
					break;
				}
				bg_buffer.Stop();
				if (flagbg)
				{
					runbg_buffer.Play(true);
				}
				
			}
			if (mainindex == 0)  GameState = GAME_START;
		}
	}
	else if (GameState == GAME_ABOUT)
	{
		if (ActionType == MOUSE_MOVE&&GameState != GAME_RUN)
		{
			p_aboutmenu->MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = p_aboutmenu->MenuMouseClick(x, y);
			if (index >= 0)
			{
				switch (index)
				{
				case 0:
					GameState = GAME_START;
					
					break;
				case 1:
					SendMessage(m_hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
					break;
				}
			}
		}
	}
	else if (GameState == GAME_RUN)
	{
		if (ActionType == MOUSE_MOVE)
		{
			run_return.MenuMouseMove(x, y);		//����
			run_speed.MenuMouseMove(x, y);		//�л��ٶ�
			run_start.MenuMouseMove(x, y);		//��ʼ��ͣ

			choosefan.MenuMouseMove(x, y);
			choosebluestar.MenuMouseMove(x, y);
			choosebottle.MenuMouseMove(x, y);
			chooseshit.MenuMouseMove(x, y);
			choosesnow.MenuMouseMove(x, y);
			choosesun.MenuMouseMove(x, y);

			chooselevel.MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = run_return.MenuMouseClick(x, y);
			if (index == 0)
			{
				GameState = GAME_SCREEN;
				guans = 0;
			}
			index = run_speed.MenuMouseClick(x, y);
			if (index == 0)
			{
				//GameState = GAME_SCREEN;
				if (speedf == 1)
				{
					setMenu(&run_speed, 100, 56, L"res\\menu\\speed2.png", setItems);
					speedf = 2;
				}
				else if (speedf == 2)
				{
					setMenu(&run_speed, 100, 56, L"res\\menu\\speed1.png", setItems);
					speedf = 1;
				}
			}
			index = run_start.MenuMouseClick(x, y);
			if (index == 0)
			{
				setMenu(&run_start, 56, 56, L"res\\menu\\zan.png", setItems);
				GameState = GAME_PAUSE;
			}

			int indexf = choosefan.MenuMouseClick(x, y);
			/*int indexbs = choosebluestar.MenuMouseClick(x, y);
			int indexb = choosebottle.MenuMouseClick(x, y);
			int indexs = chooseshit.MenuMouseClick(x, y);
			int indexsn = choosesnow.MenuMouseClick(x, y);
			int indexsun = choosesun.MenuMouseClick(x, y);*/

			
			
			if (indexf == 0)
			{
				move = 0;
				towerkind = 1;
				towerflag = 1;
				vSpriteSet::iterator p;
				vSpriteSet::iterator p1;
				
							LoadPlayer(0, 0);
							LoadBomb(0, 0);
				
			}
			if (towerflag == 1&&move==1&&player.size()>0&& player.back()->active == true)
			{
				
				player.back()->SetPosition(x - 113, y - 113);
				bomb.back()->SetPosition(x - 113, y - 113);

				player.back()->SetVisible(true);
				bomb.back()->SetVisible(true);
				player.back()->active = false;
				move = 0;
			}
			move = 1;
			int indexl = chooselevel.MenuMouseClick(x, y);
			
			vSpriteSet::iterator p;
			vSpriteSet::iterator p1;
			if (indexl == 0)
			{
				up2 = 0;
				up1 = 1;
			}
			if(up1==1&&up2==1)
			{
				for (p = player.begin(), p1 = bomb.begin(); p != player.end(), p1 != bomb.end(); p++, p1++)
				{
					if (x >= (*p)->GetX() && x <= ((*p)->GetX() + (*p)->GetRatioSize().cx) && y >= (*p)->GetY() && y <= ((*p)->GetY() + (*p)->GetRatioSize().cy))
					{
						
						(*p)->level++;
						UpdateTowerLevel(*p);
						(*p1)->level++;
						UpdateBombLevel(*p1);
					}
					else
					{
						
					}
				}
				up1 = 0;
			}
			up2 = 1;

			/*if (indexbs == 0)
			{
			towerkind = 2;
			towerflag = 1;
			LoadPlayer(x + 100, y);
			LoadBomb(x + 100, y);
			}
			if (indexb == 0)
			{
			towerkind = 3;
			towerflag = 1;
			LoadPlayer(x + 100, y);
			LoadBomb(x + 100, y);
			}
			if (indexs == 0)
			{
			towerkind = 4;
			towerflag = 1;
			LoadPlayer(x + 100, y);
			LoadBomb(x + 100, y);
			}
			if (indexsn == 0)
			{
			towerkind = 5;
			towerflag = 1;
			LoadPlayer(x + 100, y);
			LoadBomb(x + 100, y);
			}
			if (indexsun == 0)
			{
			towerkind = 6;
			towerflag = 1;
			LoadPlayer(x + 100, y);
			LoadBomb(x + 100, y);
			}*/
		}
	}
	else if (GameState == GAME_PAUSE)
	{
		if (ActionType == MOUSE_MOVE)
		{
			run_start.MenuMouseMove(x, y);		//��ʼ��ͣ
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index = run_start.MenuMouseClick(x, y);
			if (index == 0)
			{
				setMenu(&run_start, 56, 56, L"res\\menu\\start.png", setItems);
				GameState = GAME_RUN;
			}
		}
	}
	//����ҳ��
	else if (GameState == GAME_SETTING)
	{
		
		MENUITEM mItem;
		if (ActionType == MOUSE_MOVE)
		{
			p_setBack_menu->MenuMouseMove(x, y);
			setm_menu1.MenuMouseMove(x, y);
			setm_menu2.MenuMouseMove(x, y);
		}
		if (ActionType == MOUSE_LCLICK)
		{
			int index1 = setm_menu1.MenuMouseClick(x, y);
			int index2 = setm_menu2.MenuMouseClick(x, y);
			int index = p_setBack_menu->MenuMouseClick(x,y);
			
			if (index == 0)  GameState = GAME_START;
			//������Ч�ǿ�����ر�
			if (index1 == 0)
			{
				mItem.pos.x = 470;
				mItem.pos.y = 200;
				mItem.ItemName = setItems[0];
				setm_menu1.AddMenuItem(mItem);
				if (flagbg==false)
				{
					//bg_buffer.Restore();
					bg_buffer.Play(true);
					//runbg_buffer.Restore();
					//runbg_buffer.Play(true);
					flagbg = true;

					setMenu(&setm_menu1, 200, 100, L"res\\menu\\kai.png", setItems);
				}
				else if (flagbg == true)
				{
					bg_buffer.Stop();
					//runbg_buffer.Stop();
					flagbg = false;

					setMenu(&setm_menu1, 200, 100, L"res\\menu\\guan.png", setItems);
				}
			}
			 if (index2 == 0)
			{
				 mItem.pos.x = 470;
				 mItem.pos.y = 350;
				 mItem.ItemName = setItems[0];
				 setm_menu1.AddMenuItem(mItem);
				if (flagbut == false)
				{
					stopClickMusic(button_click_buffer, button_move_buffer);
					flagbut = true;

					setMenu(&setm_menu2, 200, 100, L"res\\menu\\kai.png", setItems);
				}
				else if (flagbut == true)
				{
					t_menu.SetClickSound(NULL);
					start_menu.SetClickSound(NULL);
					about_menu.SetClickSound(NULL);
					screen_menu.SetClickSound(NULL);
					setm_menu1.SetClickSound(NULL);
					setm_menu2.SetClickSound(NULL);
					setBack_menu.SetClickSound(NULL);
					run_return.SetClickSound(NULL);
					main_menu.SetClickSound(NULL);
					set_menu.SetClickSound(NULL);

					t_menu.SetMoveSound(NULL);
					start_menu.SetMoveSound(NULL);
					about_menu.SetMoveSound(NULL);
					screen_menu.SetMoveSound(NULL);
					setm_menu1.SetMoveSound(NULL);
					setm_menu2.SetMoveSound(NULL);
					setBack_menu.SetMoveSound(NULL);
					run_return.SetMoveSound(NULL);
					main_menu.SetMoveSound(NULL);
					set_menu.SetMoveSound(NULL);
					flagbut = false;

					setMenu(&setm_menu2, 200, 100, L"res\\menu\\guan.png", setItems);
				}

			}
		}
	}
}

void GraphTest::loadTowerMenu(int x, int y) {

	int btn_width = 0, btn_height = 0;
	wstring setItems[] = { L" " };
	MENUITEM mItem;

	btn_width = 226;           //�˵���ͼƬ��
	btn_height = 226;         //�˵���ͼƬ��
							  //��Ϸ����ķ���
	mItem.pos.x = 0;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	choosefan.AddMenuItem(mItem);

	setMenu(&choosefan, btn_width, btn_height, L"res\\tower\\fan.png", setItems);

	/*mItem.pos.x = 0;
	mItem.pos.y = 70;
	mItem.ItemName = setItems[0];
	choosebluestar.AddMenuItem(mItem);

	setMenu(&choosebluestar, btn_width, btn_height, L"res\\tower\\bluestaratt.png", setItems);

	mItem.pos.x = 0;
	mItem.pos.y = 100;
	mItem.ItemName = setItems[0];
	choosebottle.AddMenuItem(mItem);

	setMenu(&choosebottle, btn_width, btn_height, L"res\\tower\\bottle.png", setItems);

	mItem.pos.x = 0;
	mItem.pos.y = 150;
	mItem.ItemName = setItems[0];
	chooseshit.AddMenuItem(mItem);

	setMenu(&chooseshit, btn_width, btn_height, L"res\\tower\\shit.png", setItems);

	mItem.pos.x = 0;
	mItem.pos.y = 200;
	mItem.ItemName = setItems[0];
	choosesnow.AddMenuItem(mItem);

	setMenu(&choosesnow, btn_width, btn_height, L"res\\tower\\snow.png", setItems);

	mItem.pos.x = 0;
	mItem.pos.y = 250;
	mItem.ItemName = setItems[0];
	choosesun.AddMenuItem(mItem);

	setMenu(&choosesun, btn_width, btn_height, L"res\\tower\\sun.png", setItems);*/

	bg_buffer.Play(true);
	//GameState = GAME_RUN;
}

void GraphTest::loadUpdateMenu(int x, int y)
{
	int btn_width = 0, btn_height = 0;
	wstring setItems[] = { L" " };
	MENUITEM mItem;
	//---��Ϸ����ķ���-------------------------

	btn_width = 76;           //�˵���ͼƬ��
	btn_height = 78;         //�˵���ͼƬ��
							 //��Ϸ����ķ���
	mItem.pos.x = x;
	mItem.pos.y = y;
	mItem.ItemName = setItems[0];

	chooselevel.AddMenuItem(mItem);

	setMenu(&chooselevel, btn_width, btn_height, L"res\\tool\\up.png", setItems);


	bg_buffer.Play(true);
	//GameState = GAME_RUN;
}
//���ز˵�
void GraphTest::loadMenu()
{
	int x = 0, y = 0;
	int btn_width = 0, btn_height = 0;     //���˵��͹��ڽ���Ĳ˵�
	p_menu = &t_menu;
	p_aboutmenu = &about_menu;
	p_screenmenu = &screen_menu;
	p_setBack_menu = &setBack_menu;
	p_start_menu = &start_menu;
	p_menu->SetMenuBkg(L"res\\menu\\menu.png");
	p_aboutmenu->SetMenuBkg(L"res\\menu\\about_bak.png");
	p_screenmenu->SetMenuBkg(L"res\\menu\\guanc.png");
	p_setBack_menu->SetMenuBkg(L"res\\menu\\about_bak.png");

	wstring menuItems[] = { L"����Ϸ",L"�˳���Ϸ" };
	wstring aboutMenuItems[] = { L"����",L"�˳���Ϸ" };
	wstring setItems[] = { L" " };
	wstring chooseItems[] = { L"1 ",L"2",L"3",L"4",L"5",L"6",L"7",L"8",L"9" };
	wstring setmItems[] = { L"����" };
	MENUITEM mItem;

	//----��ҳ��-----------------------------
	btn_width = 260;           //�˵���ͼƬ��
	btn_height = 120;         //�˵���ͼƬ��
	for (int i = 0; i < 2; i++)
	{
		//��ֱ���в��ֵ�����
		/*x = (wndWidth - btn_width) / 2;
		y = i*(btn_height + MENU_SPACE) + (wnd_height - 3 * btn_height - 2 * MENU_SPACE) / 2;*/
		x = (wndWidth - btn_width) / 2;
		y = i*(btn_height + MENU_SPACE) + (wnd_height - 2 * btn_height - MENU_SPACE) / 2;

		mItem.pos.x = x + 2;      //��ǰ�˵���x����
		mItem.pos.y = y + 5;       //��ǰ�˵���y����
		mItem.ItemName = menuItems[i];          //��ǰ�˵�������
		p_menu->AddMenuItem(mItem);

		x = i*(btn_width + MENU_SPACE) + (wnd_width - 2 * btn_width - MENU_SPACE) / 2;
		y = wnd_height - 2 * btn_height + 100;
		mItem.pos.x = x;
		mItem.pos.y = y;
		mItem.ItemName = aboutMenuItems[i];
		p_aboutmenu->AddMenuItem(mItem);
	}
	setMenu(p_menu, btn_width, btn_height, L"res\\menu\\menu_b1.png", menuItems);
	//-----���ڽ���Ĳ˵�--------------------------
	setMenu(p_aboutmenu, btn_width, btn_height, L"res\\menu\\menu_b1.png", aboutMenuItems);
	//-----���ý���Ĳ˵�--------------------------
	//���ذ���
	btn_width = 236;           //�˵���ͼƬ��
	btn_height = 72;         //�˵���ͼƬ��
	x = 450;
	y = 480;
	mItem.pos.x = x;
	mItem.pos.y = y;
	mItem.ItemName = setmItems[0];
	p_setBack_menu->AddMenuItem(mItem);

	setMenu(p_setBack_menu, btn_width, btn_height, L"res\\menu\\button.png", setmItems);
	//��Ч����
	btn_width = 200;           //�˵���ͼƬ��
	btn_height = 100;         //�˵���ͼƬ��

	mItem.pos.x = 470;
	mItem.pos.y = 200;
	mItem.ItemName = setItems[0];
	setm_menu1.AddMenuItem(mItem);
	setMenu(&setm_menu1, btn_width, btn_height, L"res\\menu\\kai.png", setItems);

	mItem.pos.x = 470;
	mItem.pos.y = 350;
	mItem.ItemName = setItems[0];
	setm_menu2.AddMenuItem(mItem);
	setMenu(&setm_menu2, btn_width, btn_height, L"res\\menu\\kai.png", setItems);
	
	//----���˵��Ĺ����ʺ�--------------------------
	btn_width = 52;           //�˵���ͼƬ��
	btn_height = 75;         //�˵���ͼƬ��
							 //�����ʺ�
	mItem.pos.x = wnd_width - 150;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	start_menu.AddMenuItem(mItem);

	setMenu(&start_menu, btn_width, btn_height, L"res\\menu\\menu_h.png", setItems);
	
	//---���˵�������---------------
	//����
	mItem.pos.x = wnd_width - 100;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	set_menu.AddMenuItem(mItem);
	setMenu(&set_menu, btn_width, btn_height, L"res\\menu\\menu_s.png", setItems);

	//----�ؿ�ѡ�������-------
	btn_width = 68;
	btn_height = 55;
	//ѡ��
	int posx[] = { 58,5,210,515,185,420,660,930,900 };
	int posy[] = { 418,210,60,210,360,460,520,445,230 };
	for (int i = 0; i < 9; i++)
	{
		mItem.pos.x = posx[i];
		mItem.pos.y = posy[i];
		mItem.ItemName = chooseItems[i];
		p_screenmenu->AddMenuItem(mItem);
	}
	setMenu(p_screenmenu, btn_width, btn_height, L"res\\menu\\g.png", chooseItems);
	
	//-----�ؿ�ѡ�񷵻����˵�-------
	btn_width = 74;
	btn_height = 74;
	//�������˵�
	mItem.pos.x = 10;
	mItem.pos.y = 0;
	mItem.ItemName = setItems[0];
	main_menu.AddMenuItem(mItem);
	setMenu(&main_menu, btn_width, btn_height, L"res\\menu\\hh.png", setItems);

	//-----���н��水ť-------
	btn_width = 56;
	btn_height = 56;
	//��ʼ��ͣ
	mItem.pos.x = 850;
	mItem.pos.y = 10;
	mItem.ItemName = setItems[0];
	run_start.AddMenuItem(mItem);
	setMenu(&run_start, btn_width, btn_height, L"res\\menu\\start.png", setItems);
	//������ҳ��
	mItem.pos.x = 930;
	mItem.pos.y = 10;
	mItem.ItemName = setItems[0];
	run_return.AddMenuItem(mItem);
	setMenu(&run_return, btn_width, btn_height, L"res\\menu\\return.png", setItems);
	//�л��ٶ�
	btn_width = 100;
	mItem.pos.x = 728;
	mItem.pos.y = 10;
	mItem.ItemName = setItems[0];
	run_speed.AddMenuItem(mItem);
	setMenu(&run_speed, btn_width, btn_height, L"res\\menu\\speed1.png", setItems);

	bg_buffer.Play(true);
	GameState = GAME_START;
}
//ֹͣ���������
void GraphTest::stopClickMusic(AudioDXBuffer button_click_buffer, AudioDXBuffer button_move_buffer)
{
	t_menu.SetClickSound(&button_click_buffer);
	start_menu.SetClickSound(&button_click_buffer);
	about_menu.SetClickSound(&button_click_buffer);
	screen_menu.SetClickSound(&button_click_buffer);
	setm_menu1.SetClickSound(&button_click_buffer);
	setm_menu2.SetClickSound(&button_click_buffer);
	setBack_menu.SetClickSound(&button_click_buffer);
	run_return.SetClickSound(&button_click_buffer);
	main_menu.SetClickSound(&button_click_buffer);
	set_menu.SetClickSound(&button_click_buffer);

	t_menu.SetMoveSound(&button_move_buffer);
	start_menu.SetMoveSound(&button_move_buffer);
	about_menu.SetMoveSound(&button_move_buffer);
	screen_menu.SetMoveSound(&button_move_buffer);
	setm_menu1.SetMoveSound(&button_move_buffer);
	setm_menu2.SetMoveSound(&button_move_buffer);
	setBack_menu.SetMoveSound(&button_move_buffer);
	run_return.SetMoveSound(&button_move_buffer);
	main_menu.SetMoveSound(&button_move_buffer);
	set_menu.SetMoveSound(&button_move_buffer);
}
//���ò˵���load����set
void GraphTest::setMenu(T_Menu* menu,int w,int h,wstring path,wstring item[])
{
	Color normalClr(193, 92, 0);
	Color focusClr(213, 104, 0);
	menu->SetBtnBmp(path, w, h);
	MENU_INFO menuInfo;
	menuInfo.align = 1;							//���뷽ʽ
	menuInfo.space = MENU_SPACE;                //�˵���֮��ļ������
	menuInfo.width = w;                 //�˵����
	menuInfo.height = h;               //�˵����
	menuInfo.fontName = L"������Ů����W5";
	menuInfo.isBold = true;
	menuInfo.normalTextColor = normalClr;
	menuInfo.focusTextColor = focusClr;
	menu->SetMenuInfo(menuInfo);
	
	menu->SetClickSound(&button_click_buffer);
	menu->SetMoveSound(&button_move_buffer);
}
//����ÿһ���Ĺ���
void GraphTest::LoadWaveNPC()
{
	GAMELAYER gameLayer;
	levelNPCNum = waveNum[guan - 1] * monster;
	for (int i = 0; i < levelNPCNum; i++)
	{
		if (frameCount >= NPCFrame[i].frame - 10 && frameCount < NPCFrame[i].frame)
		{
			lightflag = true;
		}
		if (frameCount == NPCFrame[i].frame)
		{
			lightflag = false;
			//new �������,Ȼ�����npcset
			int number = NPCFrame[i].minfo - 1;
			MonsterSprite* tempSprite = new MonsterSprite(mInfo[number].imgName, 140, 121);
			MONSTER spInfo;
			spInfo.X = stationX[guan - 1];
			spInfo.Y = stationY[guan - 1];
			//�趨��ʼ����
			if (guan == 1) monsterBegin = 0;
			else if (guan == 2) monsterBegin = 5;
			else if (guan == 3) monsterBegin = 19;
			else if (guan == 4) monsterBegin = 32;
			spInfo.dir = monsterDir[monsterBegin];		//��ʼ������
			if (spInfo.dir == DIR_LEFT) spInfo.Rotation = TRANS_HFLIP_NOROT;
			else spInfo.Rotation = mInfo[number].Rotation;

			spInfo.imgName = mInfo[number].imgName;
			spInfo.speed = mInfo[number].speed;
			spInfo.speedl = mInfo[number].speedl;
			spInfo.life = mInfo[number].life;
			//spInfo.level = 0;
			spInfo.score = 0;
			spInfo.Visible = true;
			//spInfo.Active = true;
			//spInfo.Dead = false;
			spInfo.instance = mInfo[number].instance;
			spInfo.ratio = mInfo[number].ratio;
			tempSprite->Initiate(spInfo);
			tempSprite->SetLayerTypeID(LAYER_NPC);
			tempSprite->SetSequence(Monster_M, 6);
			npc_set.push_back(tempSprite);

			gameLayer.layer = tempSprite;
			gameLayer.type_id = LAYER_NPC;
			gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
			gameLayer.layer->setZorder(gameLayer.z_order);
			t_scence->Append(gameLayer);
		}
	}
}
//���ص�ͼ
void GraphTest::LoadMap(char* path)
{
	t_scence->LoadTxtMap(path);
	scn_width = t_scence->getSceneLayers()->back().layer->GetWidth();
	scn_height = t_scence->getSceneLayers()->back().layer->GetHeight();
	// ��ͼ��ʼλ���Ե�ͼ��Ϊ����
	int scn_x = (wnd_width - scn_width) / 2;
	int scn_y = (wnd_height - scn_height) / 2;
	// ����Ϸ��ͼ��ʼ��Ϊ��Ļ����λ��
	t_scence->InitScene(scn_x, scn_y, scn_width, scn_height, wnd_width, wnd_height);
	// �����е�ͼͼ�㶨λ����Ļ����
	SCENE_LAYERS::iterator p;
	for (p = t_scence->getSceneLayers()->begin(); p != t_scence->getSceneLayers()->end(); p++)
	{
		if (p->layer->ClassName() == "T_Map") p->layer->SetPosition(scn_x, scn_y);
	}
}
void GraphTest::UpdateTowerLevel(T_Sprite* t)
{
	if (t->level == 1) t->SetSequence(FAN1, 4);
	if (t->level == 2) t->SetSequence(FAN2, 4);
	if (t->level == 3) t->SetSequence(FAN3, 4);

}
void GraphTest::UpdateBombLevel( T_Sprite* t)
{
	if (t->level == 1) t->SetSequence(FANB1, 5);
	if (t->level == 2) t->SetSequence(FANB2, 5);
	if (t->level == 3) t->SetSequence(FANB3, 5);
}
//��������
void GraphTest::LoadPlayer(int x, int y)
{
	GAMELAYER gameLayer;
	SPRITEINFO spInfo;
	//������ҽ�ɫ
	/*if(towerkind==1)*/ T_Sprite* tplayer = new T_Sprite(L".\\res\\tower\\fan.png", 226, 226);
	/*if (towerkind == 2) player = new T_Sprite(L".\\res\\tower\\bluestaratt.png", 226, 226);
	if (towerkind == 3) player = new T_Sprite(L".\\res\\tower\\bottle.png", 226, 226);
	if (towerkind == 4) player = new T_Sprite(L".\\res\\tower\\shit.png", 226, 226);
	if (towerkind == 5) player = new T_Sprite(L".\\res\\tower\\snow.png", 226, 226);
	if (towerkind == 6) player = new T_Sprite(L".\\res\\tower\\sun.png", 226, 226);*/
	spInfo.Active = true;
	spInfo.Dead = false;
	spInfo.Dir = DIR_UP;
	spInfo.Rotation = TRANS_NONE;
	spInfo.Ratio = 0.9f;
	spInfo.Level = 1;
	spInfo.Score = 0;
	spInfo.Speed = 0;
	spInfo.Alpha = 220;
	spInfo.X = x;
	spInfo.Y = y;
	spInfo.Visible = false;
	tplayer->Initiate(spInfo);

	tplayer->SetSequence(FAN1, 4);
	
	/*if (towerkind == 1)*/ 
	/*if (towerkind == 2) player->SetSequence(BS1, 3);
	if (towerkind == 3) player->SetSequence(B1, 4);
	if (towerkind == 4) player->SetSequence(S1, 3);
	if (towerkind == 5) player->SetSequence(SN1, 3);
	if (towerkind == 6)player->SetSequence(SUN1, 3);*/


	tplayer->SetLayerTypeID(LAYER_NPC);
	player.push_back(tplayer);
	gameLayer.layer = tplayer;
	gameLayer.type_id = LAYER_NPC;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
}
//�����ܲ�
void GraphTest::LoadLuo(int x,int y)
{
	GAMELAYER gameLayer;
	SPRITEINFO pro_Info;
	pro_Info.X = x;
	pro_Info.Y = y;
	pro_Info.Dead = false;
	pro_Info.Rotation = TRANS_NONE;
	pro_Info.Ratio = 0.6f;
	pro_Info.Alpha = 255;
	pro_Info.Visible = true;
	pro_Info.Score = 10;
	pro_Info.Dir = DIR_LEFT;
	pro_Info.Speed = 0;
	pro_Info.Active = true;
	pro_Info.Level = 1;
	int sp_width = 118;
	int sp_height = 112;
	playLuo = new T_Sprite(L"res\\luobo.png", sp_width, sp_height);
	playLuo->Initiate(pro_Info);
	playLuo->SetLayerTypeID(LAYER_NPC);
	playLuo->SetSequence(luo_lF, 100);

	gameLayer.layer = playLuo;
	gameLayer.type_id = LAYER_NPC;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
}
//���ص���
void GraphTest::LoadProp(int t,int x,int y)
{
	GAMELAYER gameLayer;
	SPRITEINFO pro_Info;
	PROPERTY p_info;
	pro_Info.X = x;
	pro_Info.Y = y;
	pro_Info.Dead = false;
	pro_Info.Rotation = TRANS_NONE;
	pro_Info.Ratio = pInfo[t].ratio;
	pro_Info.Alpha = 255;
	pro_Info.Visible = true;
	pro_Info.Score = pInfo[t].score;
	p_info.life = pInfo[t].life;
	int sp_width = 110;
	int sp_height = 110;
	proper_set.push_back(new S_property(pInfo[t].imgName, sp_width, sp_width));
	S_property *sp = proper_set.back();
	sp->Initiate(pro_Info, p_info);
	sp->SetLayerTypeID(LAYER_NPC);
	gameLayer.layer = sp;
	gameLayer.type_id = LAYER_NPC;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
	sp = NULL;
}

void GraphTest::LoadSkill()
{
}
//��������
void GraphTest::LoadMusic()
{
	if (!ds.CreateDS(m_hWnd)) return;
	if (flagbg) {

		runbg_buffer.LoadWave(ds, L"res\\Audio\\RunBGMusic.wav");
		bg_buffer.LoadWave(ds, L"res\\Audio\\BGMusic.wav");
	}
	else
	{
		runbg_buffer.LoadWave(ds, L"");
		bg_buffer.LoadWave(ds, L"");
	}
	if (flagbut)
	{
		button_click_buffer.LoadWave(ds, L"res\\Audio\\button_click.wav");
		button_move_buffer.LoadWave(ds, L"res\\Audio\\button_select.wav");
	}
	else
	{
		button_click_buffer.LoadWave(ds, L"");
		button_move_buffer.LoadWave(ds, L"");
	}
	
}
//���ر�ըЧ��
void GraphTest::LoadExplosion(int x,int y)
{
	SPRITEINFO spInfo;
	GAMELAYER gameLayer;
	explosion_set.push_back(new T_Sprite(L"res\\boom\\pb.png",262,242));
	T_Sprite* sp = explosion_set.back();
	spInfo.Active = true;
	spInfo.Alpha = 255;
	spInfo.Dead = false;
	spInfo.Level = 0;
	spInfo.Ratio = 0.5f;
	spInfo.Rotation = TRANS_NONE;
	spInfo.Score = 0;
	spInfo.Speed = 0;
	spInfo.Visible = true;
	spInfo.X = x;
	spInfo.Y = y;
	sp->Initiate(spInfo);
	sp->SetSequence(Explosion_F, 4);
	sp->SetLayerTypeID(LAYER_EXPLOSION);
	
	gameLayer.layer = sp;
	gameLayer.type_id = LAYER_EXPLOSION;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
	sp = NULL;
}

void GraphTest::LoadBomb(int x, int y)
{
	GAMELAYER gameLayer;
	SPRITEINFO spInfo;

	/*if (towerkind == 1) */T_Sprite* tbomb = new T_Sprite(L".\\res\\tower\\fan.png", 226, 226);
	/*if (towerkind == 2) bomb = new T_Sprite(L".\\res\\tower\\bluestaratt.png", 226, 226);
	if (towerkind == 3) bomb = new T_Sprite(L".\\res\\tower\\bottle.png", 226, 226);
	if (towerkind == 4) bomb = new T_Sprite(L".\\res\\tower\\shit.png", 226, 226);
	if (towerkind == 5) bomb = new T_Sprite(L".\\res\\tower\\snow.png", 226, 226);
	if (towerkind == 6) bomb = new T_Sprite(L".\\res\\tower\\sun.png", 226, 226);*/

	spInfo.Active = true;
	spInfo.Dead = false;
	spInfo.Dir = DIR_DOWN;
	spInfo.Rotation = TRANS_NONE;
	spInfo.Ratio = 1.0f;
	spInfo.Level = 1;
	spInfo.Score = 0;
	spInfo.Speed = 5;
	spInfo.Alpha = 220;
	spInfo.Visible = false;
	spInfo.X = x;
	spInfo.Y = y;
	tbomb->Initiate(spInfo);
	switch (spInfo.Dir)
	{
		/*case DIR_LEFT:
		if (towerkind == 1) bomb->SetSequence(FANB1, 5);
		if (towerkind == 2) bomb->SetSequence(BSB1, 7);
		if (towerkind == 3) bomb->SetSequence(BB1, 5);
		if (towerkind == 4) bomb->SetSequence(SB1, 3);
		if (towerkind == 5) bomb->SetSequence(SNB1, 3);
		if (towerkind == 6)bomb->SetSequence(SUNB1, 3);

		break;
		case DIR_RIGHT:
		if (towerkind == 1) bomb->SetSequence(FANB1, 5);
		if (towerkind == 2) bomb->SetSequence(BSB1, 7);
		if (towerkind == 3) bomb->SetSequence(BB1, 5);
		if (towerkind == 4) bomb->SetSequence(SB1, 3);
		if (towerkind == 5) bomb->SetSequence(SNB1, 3);
		if (towerkind == 6)bomb->SetSequence(SUNB1, 3);
		break;
		case DIR_UP:
		if (towerkind == 1) bomb->SetSequence(FANB1, 5);
		if (towerkind == 2) bomb->SetSequence(BSB1, 7);
		if (towerkind == 3) bomb->SetSequence(BB1, 5);
		if (towerkind == 4) bomb->SetSequence(SB1, 3);
		if (towerkind == 5) bomb->SetSequence(SNB1, 3);
		if (towerkind == 6)bomb->SetSequence(SUNB1, 3);
		break;*/
	case DIR_DOWN:
		 tbomb->SetSequence(FANB1, 5);
		 
		/*if (towerkind == 1)*/ 
		/*if (towerkind == 2) bomb->SetSequence(BSB1, 7);
		if (towerkind == 3) bomb->SetSequence(BB1, 5);
		if (towerkind == 4) bomb->SetSequence(SB1, 3);
		if (towerkind == 5) bomb->SetSequence(SNB1, 3);
		if (towerkind == 6)bomb->SetSequence(SUNB1, 3);*/
		break;
	}

	tbomb->SetLayerTypeID(LAYER_NPC);
	bomb.push_back(tbomb);
	gameLayer.layer = tbomb;
	gameLayer.type_id = LAYER_NPC;
	gameLayer.z_order = t_scence->getSceneLayers()->size() + 1;
	gameLayer.layer->setZorder(gameLayer.z_order);
	t_scence->Append(gameLayer);
}
//����ͼƬ
void GraphTest::LoadImg()
{
	blood0 = new T_Graph(L"res\\property\\blood1.png");
	blood1 = new T_Graph(L"res\\property\\blood.png");
	time1 = new T_Graph(L"res\\tool\\1.png");
	time2 = new T_Graph(L"res\\tool\\2.png");
	time3 = new T_Graph(L"res\\tool\\3.png");
	time4 = new T_Graph(L"res\\tool\\go.png");
	start = new T_Graph(L"res\\menu\\start.png");
	pause = new T_Graph(L"res\\menu\\zan.png");
	light.LoadImageFile(L"res\\monster\\light.png");
	luolife = new T_Graph(L"res\\tool\\life.png");
}

void GraphTest::drawBlood(HDC hdc)
{
	for (int i = 0; i < pnum; i++)
	{
		int x = px[i] + 8;
		int y = py[i] + 1;
		int total = proper_set.at(i)->getBlood();
		int hurt = proper_set.at(i)->getBloodh();
		if (hurt >= total)
		{
			proper_set.at(i)->SetDead(true);
			continue;
		}
		blood1->PaintImage(hdc,x, y, blood1->GetImageWidth(), blood1->GetImageHeight(), 255);
		x = x + 2 + blood0->GetImageWidth()* (total - hurt) / total;
		y = y + 2;
		int sx = blood0->GetImageWidth()* (total - hurt) / total;
		int rw = blood0->GetImageWidth() * hurt / total + 1;
		blood0->PaintRegion(blood0->GetBmpHandle(), hdc, x, y, sx, 0, rw, blood0->GetImageHeight(), 1);
	}
}
//draw���npc��ʱ��  ��������
void GraphTest::drawMBlood(HDC hdc,int rx,int ry,MonsterSprite* npc)
{
	
		int x = rx + 15;
		int y = ry -10;
		int total = npc->getLife();
		int hurt = npc->getBloodh();
		if (hurt >= total)
		{
			npc->SetDead(true);
		}
		
		blood1->PaintImage(hdc, x, y, blood1->GetImageWidth(), blood1->GetImageHeight(), 255);
		x = x + 2 + blood0->GetImageWidth()* (total - hurt) / total;
		y = y + 2;
		int sx = blood0->GetImageWidth()* (total - hurt) / total;
		int rw = blood0->GetImageWidth() * hurt / total + 1;
		blood0->PaintRegion(blood0->GetBmpHandle(), hdc, x, y, sx, 0, rw, blood0->GetImageHeight(), 1);
	
}

void GraphTest::updatePlayerLife()
{
}
//����֡Ƶ
void GraphTest::updateAnimation()
{
	vSpriteSet::iterator p;
	for (p = explosion_set.begin(); p != explosion_set.end(); )
	{
		if ((*p)->LoopFrameOnce() == true)
		{
			// ɾ���������Ѿ�ʧЧ�ı�ը����	
			SCENE_LAYERS::iterator lp;
			for (lp = t_scence->getSceneLayers()->begin(); lp != t_scence->getSceneLayers()->end(); lp++)
			{
				if ((*lp).layer == (*p))
				{
					lp = t_scence->getSceneLayers()->erase(lp);
					break;
				}
			}
			p = explosion_set.erase(p);
			continue;
		}
		else
			p++;
	}
	vMonsterSet::iterator p1;
	for (p1 = npc_set.begin(); p1 != npc_set.end(); p1++)
	{
		(*p1)->LoopFrame();

	}
	vSpriteSet::iterator p2;
	for (p2 = light_set.begin(); p2 != light_set.end(); p2++)
	{
		(*p2)->LoopFrameOnce();

	}
	playLuo->LoopFrame();
}
//����NPCλ��
void GraphTest::updateNPCPos()
{
	for (int i = 0; i < npc_set.size(); i++)
	{
		int dir = npc_set.at(i)->GetDir();
		int xspeed = 0;
		int yspeed = 0;
		if (npc_set.at(i)->CollideWith(t_scence->getBarrier(), npc_set.at(i)->getBarStance()))
		{

			npc_set.at(i)->setMonsterToBar();
			int t = npc_set.at(i)->getMonsterToBar();
			dir = monsterDir[monsterBegin + t];
			npc_set.at(i)->SetDir(dir);
		}
		if (dir == DIR_LEFT) npc_set.at(i)->SetRotation(TRANS_HFLIP_NOROT);
		else npc_set.at(i)->SetRotation(TRANS_NONE);
		if (dir == DIR_LEFT)
		{
			xspeed = -npc_set.at(i)->GetSpeed() * speedf;
		}
		else if (dir == DIR_RIGHT)
		{
			xspeed = npc_set.at(i)->GetSpeed()* speedf;
		}
		else if (dir == DIR_UP)
		{
			yspeed = -npc_set.at(i)->GetSpeed()* speedf;
		}
		else if (dir == DIR_DOWN)
		{
			yspeed = npc_set.at(i)->GetSpeed()* speedf;
		}
		npc_set.at(i)->Move(xspeed, yspeed);
	}
	
}

void GraphTest::updateBombPos(T_Sprite* ts,int dir)
{
	//if (bomb == NULL) return;
	int nextStepX, nextStepY;
	int SpeedX = 0, SpeedY = 0;
	
			if (ts->IsDead() == false && ts->IsVisible() == true )
			{
				switch (dir)
				{
				case DIR_LEFT:
					SpeedX = -ts->GetSpeed();
					SpeedY = 0;

					nextStepX = ts->GetX() - ts->GetSpeed();

					break;
				case DIR_RIGHT:
					SpeedX = ts->GetSpeed();
					SpeedY = 0;

					nextStepX = ts->GetX() + ts->GetRatioSize().cx + ts->GetSpeed();

					break;
				case DIR_UP:
					SpeedX = 0;
					SpeedY = -ts->GetSpeed();

					nextStepY = ts->GetY() - ts->GetSpeed();

					break;
				case DIR_DOWN:
					SpeedX = 0;
					SpeedY = ts->GetSpeed();

					nextStepY = ts->GetY() + ts->GetRatioSize().cy + ts->GetSpeed();

					break;
				}
				int x = ts->GetX();
				int y = ts->GetY();
				ts->Move(SpeedX, SpeedY);

			}
		
	
	

}

void GraphTest::updateLuo()
{
	life = playLuo->GetScore();
	if (life < 10 && life > 0 && playLuo->IsActive() == false)
	{
		playLuo->SetSequence(&luo_eF[10 - life - 1], 1);
		playLuo->SetActive(true);
	}
	if (life == 0 && playLuo->IsVisible() == true)
	{
		playLuo->SetVisible(false);
	}
}
void GraphTest::updatePlayerLevel()
{
}
//���¹�����Ϣ
void GraphTest::updateNPCInfo()
{
	int waveLength = MaxFrameCount / waveNum[guan-1];	//����֮��ļ��
	int monsterLength = 45;							//����֮��ļ��				
	for (int i = 0; i < waveNum[guan-1]; i++)//����
	{
		int m = rand() % 7 + 2;
		for (int j = 0; j < monster; j++)//
		{
			NPCFrame[5*i+j].frame = i*waveLength+j*monsterLength;
			if (i == waveNum[guan-1] - 1 && j == monster - 1)//BOSS
			{
				NPCFrame[5 * i + j].minfo = 1;
				break;
			}
			NPCFrame[5 * i + j].minfo = m;
			if (NPCFrame[5 * i + j].minfo <= 0)
			{
				NPCFrame[5 * i + j].minfo = rand()%7+1 ;
			}
		}
		NPCFrame[0].frame = 1;
	}	
}
//���¹�������
void GraphTest::updateNPCLife()
{
	vMonsterSet::iterator p;
	for (p = npc_set.begin(); p != npc_set.end(); p++)
	{
		if (*p != NULL)
		{
			//(*p)->setBloodh(1);
			if ((*p)->IsDead() == true && (*p)->IsVisible() == true)
			{
				(*p)->SetVisible(false);
				LoadExplosion((*p)->GetX(), (*p)->GetY());
				price = price + (*p)->GetScore();

			}
		}
	}
}
//���µ�������
void GraphTest::updateProLife()
{
	sPropertySet::iterator p;
	for (p = proper_set.begin(); p != proper_set.end();p++)
	{
		if (*p != NULL)
		{
			(*p)->setBloodh(20);
			if ((*p)->IsDead()== true && (*p)->IsVisible()==true)
			{
				(*p)->SetVisible(false);
				LoadExplosion((*p)->GetX(), (*p)->GetY());
				//price = price + (*p)->GetScore();
				
			}
		}
	}
}
//���عؿ�
void GraphTest::LoadGuan(int g)
{
	t_scence = NULL;
	proper_set.clear();
	t_scence = new T_Scene();
	price = 500;
	frameCount = 0;
	frameTime = 0;
	npc_set.clear();
	updateNPCInfo();
	switch (g)
	{
		case 1:
		{
			pnum = 15;
			int x[][2] = {
				{ 14 * 17,14 * 6 },{ 14 * 27,14 * 6 },{ 14 * 46,14 * 6 },
				{ 14 * 13,14 * 15 },{ 14 * 27,14 * 15 },{ 14 * 32,14 * 15 },{ 14 * 42,14 * 15 },{ 14 * 62,14 * 15 },
				{ 14 * 37,14 * 20 },
				{ 14 * 17,14 * 25 },{ 14 * 28,14 * 25 },{ 14 * 42,14 * 25 },{ 14 * 57,14 * 25 },
				{ 14 * 27,14 * 35 },{ 14 * 42,14 * 35 }
			};
			int p[] = { 2,2,4,8,2,2,2,8,2,8,5,3,8,3,2 };
			for (int i = 0; i < pnum; i++)
			{
				px[i] = x[i][0];
				py[i] = x[i][1];
				LoadProp(p[i], px[i], py[i]);
			}
			LoadMap("res\\map\\guan1.txt");
			break;
		}
		case 2:
		{
			pnum = 27;
			int x[][2] = {
				{ 14 * 32,17 * 5 },{ 14 * 42,14 * 7 },
				{ 14 * 9,14 * 10 },{ 14 * 32,14 * 11 },{ 14 * 38,14 * 11 },{ 14 * 52,14 * 11 },{ 14 * 62,14 * 11 },
				{ 14 * 22,14 * 15 },{ 14 * 38,14 * 15 },{ 14 * 47,14 * 15 },{ 14 * 57,14 * 16 },
				{ 14 * 9,14 * 20 },{ 14 * 27,14 * 20 },{ 14 * 43,14 * 20 },{ 14 * 52,14 * 20 },{ 14 * 67,14 * 20 },
				{ 14 * 9,14 * 25 },{ 14 * 22,14 * 25 },{ 14 * 32,14 * 25 },{ 14 * 47,14 * 25 },{ 14 * 57,14 * 25 },
				{ 14 * 22,14 * 30 },{ 14 * 37,14 * 30 },{ 14 * 52,14 * 30 },{ 14 * 62,14 * 30 },
				{ 14 * 27,14 * 35 },{ 14 * 42,14 * 35 },
			};
			int p[] = {2,4,9,5,2,2,2,8,5,1,4,7,8,2,2,2,9,5,5,2,2,1,8,5,3,3,8 };
			for (int i = 0; i < pnum; i++)
			{
				px[i] = x[i][0];
				py[i] = x[i][1];
				LoadProp(p[i], px[i], py[i]);
			}
			LoadMap("res\\map\\guan2.txt");
			break;
		}
		case 3:
		{
			pnum = 21;
			int x[][2] = {
				{ 14 * 18,14 * 5 },{ 14 * 27,14 * 6 },{ 14 * 37,14 * 6 },{ 14 * 42,14 * 5 },{ 14 * 57,14 * 6 },
				{ 14 * 8,14 * 11 },{ 14 * 62,14 * 11 },
				{ 14 * 22,14 * 15 },{ 14 * 32,14 * 15 },{ 14 * 53,14 * 15 },
				{ 14 * 8,14 * 21 },{ 14 * 52,14 * 21 },
				{ 14 * 13,14 * 25 },{ 14 * 38,14 * 25 },{ 14 * 62,14 * 25 },
				{ 14 * 52,14 * 31 },
				{ 14 * 17,14 * 35 },{ 14 * 27,14 * 35 },{ 14 * 32,14 * 35 },{ 14 * 47,14 * 35 },{ 14 * 57,14 * 35 }
			};
			int p[] = { 1,2,2,1,2,2,9,5,1,2,2,5,1,5,8,2,8,8,8,8,8 };
			for (int i = 0; i < pnum; i++)
			{
				px[i] = x[i][0];
				py[i] = x[i][1];
				LoadProp(p[i], px[i], py[i]);
			}
			LoadMap("res\\map\\guan3.txt");
			break;
		}
		case 4:
		{
			pnum = 15;
			int x[][2] = {
				{ 17 * 6,17 * 6 },{ 17 * 22,17 * 6 },{ 17 * 38,17 * 6 },
				{ 14 * 7,14 * 16 },{ 14 * 37,14 * 15 },
				{ 14 * 18,14 * 21 },{ 14 * 53,14 * 21 },{ 14 * 62,14 * 21 },
				{ 14 * 7,14 * 26},{ 14 * 27,14 * 26 },{ 14 * 37,14 * 26 },
				{ 14 * 27,14 * 31 },{ 14 * 32,14 * 31 },{ 14 * 62,14 * 30 },
				{ 14 * 43,14 * 36 }
			};
			int p[] = { 9,9,9,2,7,4,5,8,2,2,4,5,2,8,2 };
			for (int i = 0; i < pnum; i++)
			{
				px[i] = x[i][0];
				py[i] = x[i][1];
				LoadProp(p[i], px[i], py[i]);
			}
			LoadMap("res\\map\\guan4.txt");
			break;
		}
	}
	
	LoadLuo(endX[g - 1], endY[g - 1]);
}
//����ʱ
void GraphTest::countDown(HDC hdc)
{
	if (frameTime <= 80)
	{
		T_Graph::PaintBlank(hdc, 0, 0, wnd_width, wnd_height, Color::Black, 100);
	}
	if (frameTime <= 20)
	{
		time3->PaintImage(hdc, 500, 250, time3->GetImageWidth(), time3->GetImageHeight(), 255);
	}
	if (frameTime>20 && frameTime <= 40)
	{
		time2->PaintImage(hdc, 500, 250, time2->GetImageWidth(), time2->GetImageHeight(), 255);
	}
	if (frameTime>40 && frameTime <= 60)
	{
		time1->PaintImage(hdc, 500, 250, time1->GetImageWidth(), time1->GetImageHeight(), 255);
	}
	if (frameTime > 60 && frameTime <= 80)
	{
		time4->PaintImage(hdc, 480, 230, time4->GetImageWidth(), time4->GetImageHeight(), 255);
	}
}
