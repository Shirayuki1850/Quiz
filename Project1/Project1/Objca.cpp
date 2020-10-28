//使用するヘッダーファイル
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"

#include "GameHead.h"
#include "Objca.h"
#include "SceneMain.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjca::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;
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
	if (m_mou_x > 350 && m_mou_x < 500 && m_mou_y>300 && m_mou_y < 500)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneMain());
		}
	}
}

//ドロー
void CObjca::Draw()
{
	float c1[4] = { 1,0,0,1 };

	float c[4] = { 1,1,1,1 };


	//タイトル
	Font::StrDraw(L"正解！！", 220, 200, 100, c1);

	Font::StrDraw(L"パネルへ", 300, 380, 50, c);

}