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

	j=0;

	m_mou_l = false;

	
}

//アクション
void CObjSelect::Action()
{
	

	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();


	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x >=430 && m_mou_x <= 710 && m_mou_y >= 190 && m_mou_y <= 470 && m_mou_l == true)
	{
		pi = ((int)m_mou_x - 430) / 70;

		pl = ((int)m_mou_y - 190) / 70;


		/*switch (pl)
		{
		case 0:
			switch (pi)
			{
			case 0: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 1: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 2: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 3: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			}
			break;

		case 1:
			switch (pl)
			{
			case 0: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 1: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 2: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 3: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			}
			break;
		case 2:
			switch (pl)
			{
			case 0: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 1: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 2: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 3: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			}
			break;
		case 3:
			switch (pl)
			{
			case 0: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 1: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 2: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 3: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			}
			break;

		}*/

				Scene::SetScene(new CSceneMain());

		
	}

	//１プレイヤーが正解した時、パネルを赤にする


	//２プレイヤーが正解した時、パネルを青にする

	//一定のゲーム数に到達したら相手のパネルを消す
}

//ドロー
void CObjSelect::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	int p=2;
	float x = 0;

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

   for (int i = 0; i < 4; i++)
   {
		   dst.m_top = 190.0f;
		   dst.m_left = 300.0f + x;
		   dst.m_right = 370.0f + x;
		   dst.m_bottom = 260.0f;
		   x += 100;

	  //描画
	  Draw::Draw(p++, &src, &dst, c, 0);
   }

   x = 0;

   for (int i = 0; i < 4; i++)
   {
	   dst.m_top = 290.0f;
	   dst.m_left = 300.0f + x;
	   dst.m_right = 370.0f + x;
	   dst.m_bottom = 360.0f;
	   x += 100;

	   //描画
	   Draw::Draw(p++, &src, &dst, c, 0);
   }

   x = 0;

   for (int i = 0; i < 4; i++)
   {
	   dst.m_top = 390.0f;
	   dst.m_left = 300.0f + x;
	   dst.m_right = 370.0f + x;
	   dst.m_bottom = 460.0f;
	   x += 100;

	   //描画
	   Draw::Draw(p++, &src, &dst, c, 0);
   }

   x = 0;

   for (int i = 0; i < 4; i++)
   {
	   dst.m_top = 490.0f;
	   dst.m_left = 300.0f + x;
	   dst.m_right = 370.0f + x;
	   dst.m_bottom = 560.0f;
	   x += 100;

	   //描画
	   Draw::Draw(p++, &src, &dst, c, 0);
   }
}