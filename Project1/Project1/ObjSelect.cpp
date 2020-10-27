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
	/*if ()
	{

	}*/

	//１プレイヤーが正解した時、パネルを赤にする

	//２プレイヤーが正解した時、パネルを青にする

	//一定のゲーム数に到達したら相手のパネルを消す
}

//ドロー
void CObjSelect::Draw()
{
	float c[4] = { 1,1,1,1 };

   //説明
   Font::StrDraw(L"ジャンルを選択してください", 185, 50, 30, c);
   
   //ジャンルをクリックする場所
   Font::StrDraw(L"国語   赤色", 100, 200, 30, c);

   Font::StrDraw(L"外国語  青色", 100, 300, 30, c);

   Font::StrDraw(L"社会    緑色", 100, 400, 30, c);

   Font::StrDraw(L"ゲーム関連   黄色", 100, 500, 30, c);
	
}