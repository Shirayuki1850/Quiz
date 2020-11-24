//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/DrawFont.h"

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

	//objgqsl->SelectPanel(flag);

	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();


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
				Scene::SetScene(new CSceneMain(pi, pl, b_pp));
		}

	}
	
	
	//２プレイヤーが正解した時、パネルを青にする

	//一定のゲーム数に到達したら相手のパネルを消す
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{

		}
	}

}

//ドロー
void CObjSelect::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	//仮マウス位置表示
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);
	RECT_F src;
	RECT_F dst;

	int p=2;
	float x = 0;
	float y = 0;

   //説明
   Font::StrDraw(L"ジャンルを選択してください", 125, 60, 45, c);
   
   //ジャンルをクリックする場所
   Font::StrDraw(L"国語", 100, 200, 30, c);

   Font::StrDraw(L"外国語", 100, 300, 30, c);

   Font::StrDraw(L"社会", 100, 400, 30, c);

   Font::StrDraw(L"ゲーム関連", 100, 500, 30, c);

   //切り取り位置の設定
   src.m_top = 0.0f;
   src.m_left = 0.0f;
   src.m_right = 128.0f;
   src.m_bottom = 128.0f;

   for (int i = 0; i < 16; i++)
   {
	  if (b_pp[i] == 1)
	  {
		  float c1[4] = { 1.0f,0.0f,0.0f,1.0f };
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

		  Draw::Draw(18, &src1, &dst1, c1, 0);
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
}

