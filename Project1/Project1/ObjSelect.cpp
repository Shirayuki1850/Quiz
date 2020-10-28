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
	pp[4];

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

	//pi = ((int)m_mou_x - 430) / 128;

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x>430&&m_mou_x<490&&m_mou_y>390&&m_mou_y<450&&m_mou_l==true)
	{
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

   //説明
   Font::StrDraw(L"ジャンルを選択してください", 185, 50, 30, c);
   
   //ジャンルをクリックする場所
   Font::StrDraw(L"国語   赤色", 100, 200, 30, c);

   Font::StrDraw(L"外国語  青色", 100, 300, 30, c);

   Font::StrDraw(L"社会    緑色", 100, 400, 30, c);

   Font::StrDraw(L"ゲーム関連   黄色", 100, 500, 30, c);

   //切り取り位置の設定
   src.m_top = 0.0f;
   src.m_left = 0.0f;
   src.m_right = 128.0f;
   src.m_bottom = 128.0f;

   //表示位置の設定
   dst.m_top = 390.0f;
   dst.m_left = 430.0f;
   dst.m_right = 490.0f;
   dst.m_bottom = 450.0f;

   //描画
   Draw::Draw(2, &src, &dst, c, 0);
	
}