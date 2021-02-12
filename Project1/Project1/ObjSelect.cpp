//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/DrawFont.h"
#include"GameL/Audio.h"

#include"ObjSelect.h"
#include "SceneMain.h"
#include "GameHead.h"

//使用するネームスペース
using namespace GameL;

CObjSelect::CObjSelect(int x,int y,int pp[16])
{
	ppx = x;
	ppy = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//イニシャライズ
void CObjSelect::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	px;
	py;
	pi;
	pl;
	pp[4];
	po[4];

	j = 0;

	m_mou_l = false;

	flag = false;

	Victory1_flag = false;
	Victory2_flag = false;
	Draw_flag = false;

	Draw_point = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			ab_pp[i][j] = b_pp[(i * 4 ) + j];
		}
	}
}

//アクション
void CObjSelect::Action()
{
	CObjca* objgqsl = (CObjca*)Objs::GetObj(OBJ_SEIGO);


	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();

	if (Victory1_flag == false && Victory2_flag == false)
	{

		//マウスの位置とクリックする場所で当たり判定
		if (m_mou_x >= 295 && m_mou_x <= 665 && m_mou_y >= 185 && m_mou_y <= 555 && m_mou_l == true)
		{
			pi = ((int)m_mou_x - 295) / 100;

			pl = ((int)m_mou_y - 185) / 100;

			if ((((int)m_mou_x - 295) - pi * 30) / 70 != pi)
				;
			else if ((((int)m_mou_y - 185) - pl * 30) / 70 != pl)
				;
			else
			{
				
				if (b_pp[(pi * 4) + pl] == 0)
					Scene::SetScene(new CSceneMain(pi, pl, b_pp, 13));
			}

		}
	}
	
	
	//２プレイヤーが正解した時、パネルを青にする

	//一定のゲーム数に到達したら相手のパネルを消す
	
		int count1 = 0;
		int count2 = 0;
		int count3 = 0;
		int count4 = 0;
		int Draw_point = 0;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (ab_pp[j][i] == 1)//横の勝利条件
				{
					count1++;
					Draw_point++;
				}
				if (ab_pp[i][j] == 1)//縦の勝利条件
				{
					count2++;
					Draw_point++;
				}
			}
			if (count1 == 4)//横
			{
				Victory1_flag = true;
			}
			else
			{
				count1 = 0;
			}
			if (count2 == 4)//縦
			{
				Victory1_flag = true;
			}
			else
			{
				count2 = 0;
			}
		}
		
		count1 = 0;
		count2 = 0;
		Draw_point = 0;

		for (int i = 0; i < 4; i++)//斜めの勝利条件
		{
			if (ab_pp[i][i] == 1)
			{
				count1++;
				Draw_point++;
			}
			if (ab_pp[3 - i][i] == 1)
			{
				count2++;
				Draw_point++;
			}
			if (count1 == 4)
			{
				Victory1_flag = true;
			}
			if (count2== 4)
			{
				Victory1_flag = true;
			}
		}

		
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (ab_pp[j][i] == 2)//横の勝利条件
				{
					count3++;
					Draw_point++;
				}
				if (ab_pp[i][j] == 2)//縦の勝利条件
				{
					count4++;
					Draw_point++;
				}
			}
			if (count3 == 4)//横
			{
				Victory2_flag = true;
			}
			else
			{
				count3 = 0;
			}
			if (count4 == 4)//縦
			{
				Victory2_flag = true;
			}
			else
			{
				count4 = 0;
			}
		}

		count3 = 0;
		count4 = 0;
		Draw_point = 0;

		for (int i = 0; i < 4; i++)//斜めの勝利条件
		{
			if (ab_pp[i][i] == 2)
			{
				count3++;
				Draw_point++;
			}
			if (ab_pp[3 - i][i] == 2)
			{
				count4++;
				Draw_point++;
			}
			if (count3 == 4)
			{
				Victory2_flag = true;
			}
			if (count4 == 4)
			{
				Victory2_flag = true;
			}
		}

		if (Draw_point==16)
		{
			Draw_flag = true;
		}

}

//ドロー
void CObjSelect::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	float b_c[4] = { 0.0f,0.0f,0.0f,1.0f };

	//仮マウス位置表示
	/*
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);
	*/
	RECT_F src;
	RECT_F dst;

	RECT_F src2;
	RECT_F dst2;

	src2.m_bottom = 0.0f;
	src2.m_left = 0.0f;
	src2.m_right = 128.0f;
	src2.m_top = 128.0f;

	for (int i = 0; i < 4; i++)
	{
		if (i == 0 || i == 2)
		{
			dst2.m_top = 180.0f + (i * 100);
			dst2.m_left = 140.0f;
			dst2.m_right = 700.0f;
			dst2.m_bottom = 270.0f + (i * 100);
		}
		if (i == 1 || i == 3)
		{
			dst2.m_top = 180.0f + (i * 100);
			dst2.m_left = 140.0f;
			dst2.m_right = 700.0f;
			dst2.m_bottom = 270.0f + (i * 100);
		}
		

		Draw::Draw(21, &src2, &dst2, b_c, 0);
	}
	
	

	int p=2;
	float x = 0;
	float y = 0;

	if (Victory1_flag == false && Victory2_flag == false)
	{
		//説明
		Font::StrDraw(L"好きなパネルを押してください。", 80, 90, 45, c);
	}
 
   //ジャンルをクリックする場所

	float f1[4] = { 1.0f,0.0f,0.0f,1.0f };
	float f2[4] = { 0.5f,0.5f,1.0f,1.0f };
	float f3[4] = { 1.0f,1.0f,0.0f,1.0f };
	float f4[4] = { 0.0f,1.0f,0.0f,1.0f };

   Font::StrDraw(L"国語", 170, 210, 30, f1);

   Font::StrDraw(L"外国語", 170, 310, 30, f2);

   Font::StrDraw(L"社会", 170, 410, 30, f3);

   Font::StrDraw(L"ゲーム", 170, 510, 30, f4);

  

  
  

   //切り取り位置の設定
   src.m_top = 0.0f;
   src.m_left = 0.0f;
   src.m_right = 128.0f;
   src.m_bottom = 128.0f;

   for (int i = 0; i < 16; i++)
   {
	  if (b_pp[i] == 1)
	  {
		 // float c1[4] = { 1.0f,0.0f,0.0f,1.0f };
		  RECT_F src1;
		  RECT_F dst1;

		  src1.m_top = 0.0f;
		  src1.m_left = 0.0f;
		  src1.m_right = 128.0f;
		  src1.m_bottom = 128.0f;

		  dst1.m_top = 190.0f + y;
		  dst1.m_left = 300.0f + x;
		  dst1.m_right = 370.0f + x;
		  dst1.m_bottom = 260.0f + y;

		  Draw::Draw(18, &src1, &dst1, c, 0);
	  }
	  else if (b_pp[i] == 2)
	  {
		// float c1[4] = { 1.0f,0.0f,0.0f,1.0f };
		  RECT_F src1;
		  RECT_F dst1;

		  src1.m_top = 0.0f;
		  src1.m_left = 0.0f;
		  src1.m_right = 128.0f;
		  src1.m_bottom = 128.0f;

		  dst1.m_top = 190.0f + y;
		  dst1.m_left = 300.0f + x;
		  dst1.m_right = 370.0f + x;
		  dst1.m_bottom = 260.0f + y;

		  Draw::Draw(19, &src1, &dst1, c, 0);
	  }
	  else
	  {
		  dst.m_top = 190.0f + y;
		  dst.m_left = 300.0f + x;
		  dst.m_right = 370.0f + x;
		  dst.m_bottom = 260.0f + y;
		  //描画
		  Draw::Draw(p, &src, &dst, c, 0);
	  }

	  y += 100;
	  p++;
	  if (y == 400)
	  {
		  y = 0;
		  x += 100;
	  }
   }

   

   if (Victory1_flag==true)
   {
	   float c1[4] = { 1.0f,0.0f,0.0f,1.0f };
	   Font::StrDraw(L"1P勝ち", 225, 60, 100, c1);

   }

   if (Victory2_flag==true)
   {
	   float c2[4] = { 0.0f,0.0f,2.0f,1.0f };
	   Font::StrDraw(L"2P勝ち", 225, 60, 100, c2);

   }

   if (Draw_flag == true)
   {
	   float c3[4] = { 0.0f,0.0f,0.0f,0.0f };

	   Font::StrDraw(L"同点です",225,60,100,c3);
   }
  
}

