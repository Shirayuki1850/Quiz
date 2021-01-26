#pragma once
//使用するヘッダー
#include "GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：メイン
class CObjMain :public CObj
{
public:
	CObjMain(float x, float y, int pp[16], int m);
	~CObjMain() {};
	void Init();  //イニシャライズ
	void Action(); //アクション
	void Draw();   //ドロー
private:
	float m_mou_x; //マウスの位置X
	float m_mou_y; //マウスの位置Y
	bool  m_mou_l; //マウスの左ボタン
	bool f;
	bool f2;
	wchar_t str1[100][100];
	wchar_t str2[100];

	int pi;
	int pl;
	int b_pp[16];
	int mam;

	bool Answer_lock;

};