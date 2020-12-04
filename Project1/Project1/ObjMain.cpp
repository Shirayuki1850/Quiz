//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)


#include "GameL/\DrawTexture.h"
#include "GameL/WinInputs.h"
#include "GameL/SceneManager.h"
#include "GameL/\DrawFont.h"

#include "ObjMain.h"
#include "GameHead.h"


//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjMain::CObjMain(float x, float y,int pp[16])
{
	pi = x;
	pl = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
	
}

//イニシャライズ
void CObjMain::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;

	f = false;
	f2 = false;
}

//アクション
void CObjMain::Action()
{

	if (Input::GetVKey('F') == true&&f==false) //1P
	{

		f = true;
		f2 = false;
	}
	if (f == true)
	{
		float c1[4] = { 1,0,0,1 };

		Font::StrDraw(L"1P答えをどうぞ。", 210, 350, 50, c1);
	}

	if (Input::GetVKey('J') == true &&f2==false)//2P
	{
		f2 = true;
		f = false;
		
	}
	if (f2 == true)
	{
		float c2[4] = { 0,0.6,1,1 };

		Font::StrDraw(L"2P答えをどうぞ。", 210, 400, 50, c2);
	}

	if (Input::GetVKey(VK_SPACE) == true)
	{
		f = false;
		f2 = false;
	}
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();


	//マウスの位置とクリックする場所で当たり判定(選択肢１)
	if (m_mou_x > 7 && m_mou_x < 15 && m_mou_y>60 && m_mou_y < 70)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneca(pi,pl,b_pp));
		}
	}

	//マウスの位置とクリックする場所で当たり判定（選択肢２）
	if (m_mou_x > 7 && m_mou_x < 15 && m_mou_y>115 && m_mou_y < 125)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia(pi,pl,b_pp));
		}
	}

	//マウスの位置とクリックする場所で当たり判定（選択肢３）
	if (m_mou_x > 7 && m_mou_x < 15 && m_mou_y>170 && m_mou_y < 180)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia(pi,pl,b_pp));
		}
	}

	//マウスの位置とクリックする場所で当たり判定（選択肢４）
	if (m_mou_x > 7 && m_mou_x < 15 && m_mou_y>225 && m_mou_y < 235)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia(pi,pl,b_pp));
		}
	}
}

//ドロー
void CObjMain::Draw()
{
	float c[4] = { 1,1,1,1 };

	Font::StrDraw(L"1P::Fキーまたは2P::Jキーで回答権獲得", 140, 300, 30, c);
}