#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト:タイトル
class CObjSelect : public CObj
{
public:
	CObjSelect() {};
	~CObjSelect() {};
	void Init();   //イニシャライズ
	void Action(); //アクション
    void Draw();   //ドロー
private:

	float m_mou_x; //マウスの位置X
	float m_mou_y; //マウスの位置Y
	float px;      //パネルのX幅
	float py;      //パネルのY幅
	int pi;
	float pp[4];   //パネルに触れた位置

	bool  m_mou_l; //マウスの左ボタン
};