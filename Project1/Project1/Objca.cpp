//使用するヘッダーファイル
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"

#include "GameHead.h"
#include "Objca.h"
#include "SceneMain.h"

//使用するネームスペース
using namespace GameL;


CObjca::CObjca(int x,int y,int pp[16])
{
	px = x;
	py = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//イニシャライズ
void CObjca::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;
	flag = true;
}

//アクション
void CObjca::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();

	//マウスの位置とクリックする場所で当たり判定
	if (m_mou_x > 200 && m_mou_x < 605 && m_mou_y>375 && m_mou_y < 445)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			//b_pp[(px*4) + py] = 1;
			Scene::SetScene(new CSelectScene(px,py,b_pp));
		}
	}
}

//ドロー
void CObjca::Draw()
{
	float c1[4] = { 1,0,0,1 };

	float c[4] = { 1,1,1,1 };

	//タイトル
	Font::StrDraw(L"正解!!", 200, 160, 150, c1);

	Font::StrDraw(L"パネル選択へ戻る", 140, 380, 70, c);

}