//使用するヘッダーファイル
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"
#include"GameL\DrawTexture.h"
#include "GameHead.h"
#include "ObjTitle.h"
#include "SceneMain.h"
#include "SelectScene.h"
#include "ObjBackground.h"

//使用するネームスペース
using namespace GameL;


//イニシャライズ
void CObjTitle::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;
	for (int i = 0; i < 16; i++)
	{
			pp[i] = 0;
		
	}

}

//アクション
void CObjTitle::Action()
{
	


	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 180 && m_mou_x < 615 && m_mou_y>400 && m_mou_y < 500)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSelectScene(0,0,pp));
		}
	}
}

//ドロー
void CObjTitle::Draw()
{

	float c[4] = { 1,1,1,1 };//タイトルカラー
	float t[4] = { 0,0,1,1 };//クリックカラー

	/*//仮マウス位置表示
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);*/

	//タイトル
	Font::StrDraw(L"Re：Panel Connection", 35, 200, 75, c);

	Font::StrDraw(L"Click Start", 225, 400, 64, t);

	

}