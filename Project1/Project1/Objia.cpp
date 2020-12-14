//使用するヘッダーファイル
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"

#include "GameHead.h"
#include "Objca.h"
#include "SceneMain.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjia::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;
}

//コンストラクタ
CObjia::CObjia(float x, float y,int pp[16])
{
	pi = x;
	pl = y;

	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//アクション
void CObjia::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 235 && m_mou_x < 570 && m_mou_y>375 && m_mou_y < 445)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneMain(pi,pl,b_pp));
		}
	}
}

//ドロー
void CObjia::Draw()
{
	float c1[4] = {1,0,0,1 };

	float c[4] = { 1,1,1,1 };

	//タイトル
	Font::StrDraw(L"不正解", 170, 130, 150, c1);

	Font::StrDraw(L"問題へ戻る", 235, 380, 70, c);

}