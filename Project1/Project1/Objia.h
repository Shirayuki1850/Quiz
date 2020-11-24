#pragma once
//使用するヘッダー
#include "GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：タイトル
class CObjia :public CObj
{
public:
	CObjia(float x,float y) ;
	~CObjia() {};
	void Init();   //イニシャライズ
	void Action(); //アクション
	void Draw();   //ドロー
private:

	float m_mou_x; //マウスの位置X
	float m_mou_y; //マウスの位置Y
	bool  m_mou_l; //マウスの左ボタン

	int pi;
	int pl;
};