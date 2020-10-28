//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameL\HitBoxManager.h"
#include "GameL\WinInputs.h"

#include "math.h"

#include "GameHead.h"
#include "Objmouse.h"

#include "UtilityModule.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjmouse::Init()
{

	//マウスのグラフィック読み込み
	//Draw::LoadImage(L"mouse1.png", 1, TEX_SIZE_1024);


	x = 0;  //主人公のX軸位置情報
	y = 0;  //主人公のY軸位置情報


	Cx = 0;//円の中心の座標
	Cy = 0;
	Angle = 0;  //円の動きの角度
	R = 30;   //円の動きの半径

	time = 0;

	m_r = 0.0f;


	button = false;

}

//アクション
void CObjmouse::Action()
{
	time++;

	m_mou_px = (float)Input::GetPosX();
	m_mou_py = (float)Input::GetPosY();
	if (time >= 1)
	{
		//m_r +=50.0f;

	}

}

//ドロー
void CObjmouse::Draw()
{
	//   R    G    B    透過
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 1024.0f;
	src.m_bottom = 1024.0f;

	//表示位置の設定
	dst.m_top = -20.0f + m_mou_py;
	dst.m_left = -16.0f + m_mou_px;
	dst.m_right = 32.0f + m_mou_px;
	dst.m_bottom = 28.0f + m_mou_py;



	//描画
	Draw::Draw(1, &src, &dst, c, m_r);

}