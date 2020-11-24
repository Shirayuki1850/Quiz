#pragma once
//使用するヘッダー
#include "GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：タイトル
class CObjca :public CObj
{
public:
	CObjca(int x,int y,int pp[16]);
	~CObjca() {};
	void Init();   //イニシャライズ
	void Action(); //アクション
	void Draw();   //ドロー

	void SelectPanel(bool b_flag) { b_flag = true; }
private:

	float m_mou_x; //マウスの位置X
	float m_mou_y; //マウスの位置Y
	bool  m_mou_l; //マウスの左ボタン

	bool flag;

	int b_pp[16];

	int px;
	int py;
};