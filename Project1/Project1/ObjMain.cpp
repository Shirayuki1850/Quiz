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

//イニシャライズ
void CObjMain::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;
}

//アクション
void CObjMain::Action()
{
	//マウスの位置を取得
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//マウスのボタンの状態
	m_mou_l = Input::GetMouButtonL();


	//マウスの位置とクリックする場所で当たり判定(選択肢１)
	if (m_mou_x > 0 && m_mou_x < 75 && m_mou_y>26 && m_mou_y < 50)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneca());
		}
	}

	//マウスの位置とクリックする場所で当たり判定（選択肢２）
	if (m_mou_x > 0 && m_mou_x < 100 && m_mou_y>51 && m_mou_y < 75)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia());
		}
	}

	//マウスの位置とクリックする場所で当たり判定（選択肢３）
	if (m_mou_x > 0 && m_mou_x < 120 && m_mou_y>76 && m_mou_y < 100)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia());
		}
	}

	//マウスの位置とクリックする場所で当たり判定（選択肢４）
	if (m_mou_x > 0 && m_mou_x < 150 && m_mou_y>101 && m_mou_y < 125)
	{
		//マウスのボタンが押されたらメインに遷移
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia());
		}
	}
}

//ドロー
void CObjMain::Draw()
{

}