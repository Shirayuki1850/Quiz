//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)


#include "GameL/\DrawTexture.h"
#include "GameL/WinInputs.h"
#include "GameL/SceneManager.h"
#include "GameL/\DrawFont.h"
#include "GameL/\DrawTexture.h"
#include "GameL/Audio.h"
#include "ObjMain.h"
#include "GameHead.h"
#include<time.h>
#include <stdlib.h>

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjMain::CObjMain(float x, float y,int pp[16],int m)
{
	pi = x;
	pl = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
	mam = m;
}

//イニシャライズ
void CObjMain::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;

	Answer_lock = false;

	f = false;
	f2 = false;
	FILE* fp = 0;

	unsigned int seed;
	seed = (unsigned int)time(NULL);
	srand(seed);

	if (mam == 13)
	{
		mam = rand() % 12;
	}

	switch (pl)
	{
	case 0:
		switch (mam)
		{
		case 0: fopen_s(&fp, "Quiz1.txt", "rb");//跪く
			break;
		case 1: fopen_s(&fp, "Quiz2.txt", "rb");//徹
			break;
		case 2: fopen_s(&fp, "Quiz3.txt", "rb");//シマウマ
			break;
		case 3: fopen_s(&fp, "Quiz4.txt", "rb");//十二月八日
			break;
		case 4: fopen_s(&fp, "Quiz17.txt", "rb");//応
			break;
		case 5: fopen_s(&fp, "Quiz24.txt", "rb");//こざとへん
			break;
		case 6: fopen_s(&fp, "Quiz25.txt", "rb");//助詞
			break;
		case 7: fopen_s(&fp, "Quiz26.txt", "rb");//詳しく
			break;
		case 8: fopen_s(&fp, "Quiz27.txt", "rb");//一枚
			break;
		case 9: fopen_s(&fp, "Quiz34.txt", "rb");//自立語
			break;
		case 10: fopen_s(&fp, "Quiz35.txt", "rb");//喜寿
			break;
		case 11: fopen_s(&fp, "Quiz36.txt", "rb");//水無月
			break;
		}

		break;

	case 1:
		switch (mam)
		{
		case 0: fopen_s(&fp, "Quiz5.txt", "rb");//Good afternoon
			break;
		case 1: fopen_s(&fp, "Quiz6.txt", "rb");//しばしば
			break;
		case 2: fopen_s(&fp, "Quiz7.txt", "rb");//悲劇
			break;
		case 3: fopen_s(&fp, "Quiz8.txt", "rb");//ラーコン
			break;
		case 4: fopen_s(&fp, "Quiz28.txt", "rb");//positive
			break;
		case 5: fopen_s(&fp, "Quiz29.txt", "rb");//黒
			break;
		case 6: fopen_s(&fp, "Quiz30.txt", "rb");//deer
			break;
		case 7: fopen_s(&fp, "Quiz31.txt", "rb");//baked rice
			break;
		case 8: fopen_s(&fp, "Quiz37.txt", "rb");//グーテン　モルゲン
			break;
		case 9: fopen_s(&fp, "Quiz38.txt", "rb");//カリメーラ
			break;
		case 10: fopen_s(&fp, "Quiz39.txt", "rb");//スパシィーバ
			break;
		case 11: fopen_s(&fp, "Quiz40.txt", "rb");//ジャクーユ
			break;
		}
		break;
	case 2:
		switch (mam)
		{
		case 0: fopen_s(&fp, "Quiz9.txt", "rb");//択捉島
			break;
		case 1: fopen_s(&fp, "Quiz10.txt", "rb");//常会
			break;
		case 2: fopen_s(&fp, "Quiz11.txt", "rb");//14
			break;
		case 3: fopen_s(&fp, "Quiz12.txt", "rb");//気温・風・降水量
			break;
		case 4: fopen_s(&fp, "Quiz18.txt", "rb");//シルクロード
			break;
		case 5: fopen_s(&fp, "Quiz19.txt", "rb");//デンマーク
			break;
		case 6: fopen_s(&fp, "Quiz20.txt", "rb");//スミス
			break;
		case 7: fopen_s(&fp, "Quiz21.txt", "rb");//チンギス・ハン
			break;
		case 8: fopen_s(&fp, "Quiz41.txt", "rb");//◎
			break;
		case 9: fopen_s(&fp, "Quiz42.txt", "rb");//サハラ砂漠
			break;
		case 10: fopen_s(&fp, "Quiz43.txt", "rb");//岩宿遺跡
			break;
		case 11: fopen_s(&fp, "Quiz44.txt", "rb");//パキスタン
			break;
		}
		break;
	case 3:
		switch (mam)
		{
		case 0: fopen_s(&fp, "Quiz13.txt", "rb");//デビルメイクライ
			break;
		case 1: fopen_s(&fp, "Quiz14.txt", "rb");//スロウ
			break;
		case 2: fopen_s(&fp, "Quiz15.txt", "rb");//YURUSHITE
			break;
		case 3: fopen_s(&fp, "Quiz16.txt", "rb");//ノコノコタウン
			break;
		case 4: fopen_s(&fp, "Quiz22.txt", "rb");//4本
			break;
		case 5: fopen_s(&fp, "Quiz23.txt", "rb");//Newニンテンドー2DS LL
			break;
		case 6: fopen_s(&fp, "Quiz32.txt", "rb");//+4900
			break;
		case 7: fopen_s(&fp, "Quiz33.txt", "rb");//リンゴ+ヤギのバター
			break;
		case 8: fopen_s(&fp, "Quiz45.txt", "rb");//ルーク
			break;
		case 9: fopen_s(&fp, "Quiz46.txt", "rb");//PlayStation Portable
			break;
		case 10: fopen_s(&fp, "Quiz47.txt", "rb");//メタルギアソリッド
			break;
		case 11: fopen_s(&fp, "Quiz48.txt", "rb");//テトリス
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
		//ボタンが押された時にSEを鳴らす
		Audio::Start(3);

		f = true;
		b_pp[(pi * 4) + pl] = 1;
		Answer_lock = true;

	}
	
	if (Input::GetVKey('J') == true && f == false &&f2==false)//2P
	{
		//ボタンが押された時にSEを鳴らす
		Audio::Start(3);

		f2 = true;
		f = false;
		Answer_lock = true;
		
		b_pp[(pi * 4) + pl] = 2;
	}

	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定(選択肢１)
	if (Answer_lock == true)
	{

		if (m_mou_x > 7 && m_mou_x < 104 && m_mou_y>50 && m_mou_y < 80)
		{
			if ((pl == 0 && mam == 0) || (pl == 0 && mam == 3) || (pl == 0 && mam == 4)|| (pl == 0 && mam == 7)  || (pl == 0 && mam == 11) ||
				(pl == 1 && mam == 7)|| (pl == 1 && mam == 10) || (pl == 2 && mam == 1) || (pl == 2 && mam == 5)|| (pl == 2 && mam == 7) || (pl == 2 && mam == 10) ||
				(pl == 3 && mam == 1) ||(pl == 3 && mam == 11))
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
					Scene::SetScene(new CSceneia(pi, pl, b_pp,mam));//不正解
				}
			}

		}
		//マウスの位置とクリックする場所で当たり判定（選択肢２）
		else if (m_mou_x > 7 && m_mou_x < 104 && m_mou_y>105 && m_mou_y < 125)
		{
			if ((pl == 0 && mam == 2) || (pl == 0 && mam == 5) || (pl == 0 && mam == 10) || (pl == 1 && mam == 4)||(pl == 1 && mam == 2) || (pl == 2 && mam == 0) || (pl == 2 && mam == 4)||
				(pl == 2 && mam == 9) || (pl == 3 && mam == 0)|| (pl == 3 && mam == 1) || (pl == 3 && mam == 7) || (pl == 3 && mam == 9))
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
					Scene::SetScene(new CSceneia(pi, pl, b_pp,mam));//不正解
				}
			}
		}
		//マウスの位置とクリックする場所で当たり判定（選択肢３）
		else if (m_mou_x > 7 && m_mou_x < 104 && m_mou_y>160 && m_mou_y < 180)
		{
			if ((pl == 0 && mam == 1) || (pl == 0 && mam == 6) || (pl == 0 && mam == 9) || (pl == 1 && mam == 1) || (pl == 1 && mam == 8) || (pl == 2 && mam == 3) || (pl == 2 && mam == 6) || (pl == 2 && mam == 8) 
				||(pl == 3 && mam == 3)||(pl == 3 && mam == 4)|| (pl == 3 && mam == 6) || (pl == 3 && mam == 10))
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
					Scene::SetScene(new CSceneia(pi, pl, b_pp,mam));//不正解
				}
			}
		}
		//マウスの位置とクリックする場所で当たり判定（選択肢４）
		else if (m_mou_x > 7 && m_mou_x < 104 && m_mou_y>215 && m_mou_y < 235)
		{
			if ((pl == 1 && mam == 0) || (pl == 0 && mam == 8) || (pl == 1 && mam == 3)||(pl == 1 && mam == 5) || (pl == 1 && mam == 6) || (pl == 1 && mam == 9) || (pl == 1 && mam == 11) || (pl == 2 && mam == 2) || (pl == 2 && mam == 11) ||
				(pl == 3 && mam == 2) || (pl == 3 && mam == 5) || (pl == 3 && mam == 8))
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
					Scene::SetScene(new CSceneia(pi, pl, b_pp,mam));//不正解
				}
			}
		}

	}
}

//ドロー
void CObjMain::Draw()
{

	int y = 0;
	float c[4] = { 1,1,1,1 };
	for (int i = 0; i < 5; i++)
	{
		swprintf(str2, L"%s", str1[i]);
		Font::StrDraw(str2, 0, 5 * i + y, 25, c);

		y += 50;
	}
	

	Font::StrDraw(L"1P::Fキーまたは2P::Jキーで回答権獲得", 50, 300, 40, c);
	if (f == true)
	{
		float c1[4] = { 1,0,0,1 };

		Font::StrDraw(L"1P答えをどうぞ。", 210, 360, 50, c1);
	}
	
	if (f2 == true)
	{
		float c2[4] = { 0,0,1,1 };

		Font::StrDraw(L"2P答えをどうぞ。", 210, 360, 50, c2);
	}
}