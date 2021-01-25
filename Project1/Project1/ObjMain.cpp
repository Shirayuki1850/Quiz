//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)


#include "GameL/\DrawTexture.h"
#include "GameL/WinInputs.h"
#include "GameL/SceneManager.h"
#include "GameL/\DrawFont.h"
#include "GameL/\DrawTexture.h"
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
	FILE* fp = 0;
	switch (pl)
	{
	case 0:
		switch (pi)
		{
		case 0: fopen_s(&fp, "Quiz1.txt", "rb");
			break;
		case 1: fopen_s(&fp, "Quiz2.txt", "rb");
			break;
		case 2: fopen_s(&fp, "Quiz3.txt", "rb");
			break;
		case 3: fopen_s(&fp, "Quiz4.txt", "rb");
			break;
		}
		break;

	case 1:
		switch (pi)
		{
		case 0: fopen_s(&fp, "Quiz5.txt", "rb");
			break;
		case 1: fopen_s(&fp, "Quiz6.txt", "rb");
			break;
		case 2: fopen_s(&fp, "Quiz7.txt", "rb");
			break;
		case 3: fopen_s(&fp, "Quiz8.txt", "rb");
			break;
		}
		break;
	case 2:
		switch (pi)
		{
		case 0: fopen_s(&fp, "Quiz9.txt", "rb");
			break;
		case 1: fopen_s(&fp, "Quiz10.txt", "rb");
			break;
		case 2: fopen_s(&fp, "Quiz11.txt", "rb");
			break;
		case 3: fopen_s(&fp, "Quiz12.txt", "rb");
			break;
		}
		break;
	case 3:
		switch (pi)
		{
		case 0: fopen_s(&fp, "Quiz13.txt", "rb");
			break;
		case 1: fopen_s(&fp, "Quiz14.txt", "rb");
			break;
		case 2: fopen_s(&fp, "Quiz15.txt", "rb");
			break;
		case 3: fopen_s(&fp, "Quiz16.txt", "rb");
			break;
		}
		break;

	}
	for (int i = 0; i < 100; i++)
		fgetws(str1[i], 99, fp);

	fclose(fp);

}

//アクション
void CObjMain::Action()
{

	if (Input::GetVKey('F') == true&&f==false && f2 == false) //1P
	{

		f = true;
		b_pp[(pi * 4) + pl] = 1;
	}
	

	if (Input::GetVKey('J') == true && f == false &&f2==false)//2P
	{
		f2 = true;
		f = false;
		
		b_pp[(pi * 4) + pl] = 2;
	}

	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();


	//マウスの位置とクリックする場所で当たり判定(選択肢１)
	if (Input::GetVKey('J')==true || Input::GetVKey('F') == true)
	{

		if (m_mou_x > 7 && m_mou_x < 104 && m_mou_y>60 && m_mou_y < 70)
		{
			if ((pl == 0 && pi == 0) || (pl == 0 && pi == 3) || (pl == 2 && pi == 1) || (pl == 3 && pi == 1))
			{
				//マウスのボタンが押されたらメインに遷移
				if (m_mou_l == true)
				{
					Scene::SetScene(new CSceneca(pi, pl, b_pp));
				}
			}
			else
			{
				if (m_mou_l == true)
				{
					Scene::SetScene(new CSceneia(pi, pl, b_pp));//不正解
				}
			}

		}
		//マウスの位置とクリックする場所で当たり判定（選択肢２）
		else if (m_mou_x > 7 && m_mou_x < 104 && m_mou_y>115 && m_mou_y < 125)
		{
			if ((pl == 0 && pi == 2) || (pl == 1 && pi == 2) || (pl == 2 && pi == 0) || (pl == 3 && pi == 0))
			{
				//マウスのボタンが押されたらメインに遷移
				if (m_mou_l == true)
				{
					Scene::SetScene(new CSceneca(pi, pl, b_pp));//正解
				}
			}
			else
			{
				if (m_mou_l == true)
				{
					Scene::SetScene(new CSceneia(pi, pl, b_pp));//不正解
				}
			}
		}
		//マウスの位置とクリックする場所で当たり判定（選択肢３）
		else if (m_mou_x > 7 && m_mou_x < 104 && m_mou_y>170 && m_mou_y < 180)
		{
			if ((pl == 0 && pi == 1) || (pl == 1 && pi == 1) || (pl == 2 && pi == 3) || (pl == 3 && pi == 3))
			{
				//マウスのボタンが押されたらメインに遷移
				if (m_mou_l == true)
				{
					Scene::SetScene(new CSceneca(pi, pl, b_pp));//正解
					//Scene::SetScene(new CSceneia(pi,pl,b_pp));
				}
			}
			else
			{
				if (m_mou_l == true)
				{
					Scene::SetScene(new CSceneia(pi, pl, b_pp));//不正解
				}
			}
		}
		//マウスの位置とクリックする場所で当たり判定（選択肢４）
		else if (m_mou_x > 7 && m_mou_x < 104 && m_mou_y>225 && m_mou_y < 235)
		{
			if ((pl == 1 && pi == 0) || (pl == 1 && pi == 3) || (pl == 2 && pi == 2) || (pl == 3 && pi == 2))
			{
				//マウスのボタンが押されたらメインに遷移
				if (m_mou_l == true)
				{
					Scene::SetScene(new CSceneca(pi, pl, b_pp));//正解
					//Scene::SetScene(new CSceneia(pi,pl,b_pp));
				}
			}
			else
			{
				if (m_mou_l == true)
				{
					Scene::SetScene(new CSceneia(pi, pl, b_pp));//不正解
				}
			}
		}

	}
}

//ドロー
void CObjMain::Draw()
{

	int x = 0;
	float c[4] = { 1,1,1,1 };
	for (int i = 0; i < 5; i++)
	{
		swprintf(str2, L"%s", str1[i]);
		Font::StrDraw(str2, 0, 5 * i + x, 25, c);

		x += 50;
	}
	

	Font::StrDraw(L"1P::Fキーまたは2P::Jキーで回答権獲得", 140, 300, 30, c);
	if (f == true)
	{
		float c1[4] = { 1,0,0,1 };

		Font::StrDraw(L"1P答えをどうぞ。", 210, 350, 50, c1);
	}
	
	if (f2 == true)
	{
		float c2[4] = { 0,0,1,1 };

		Font::StrDraw(L"2P答えをどうぞ。", 210, 400, 50, c2);
	}

	/*
	//仮マウス位置表示
	
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);
	*/

}