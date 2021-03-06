#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト:タイトル
class CObjSelect : public CObj
{
public:
	CObjSelect(int x,int y,int pp[16]);
	~CObjSelect() {};
	void Init();   //イニシャライズ
	void Action(); //アクション
    void Draw();   //ドロー
private:

	float m_mou_x; //マウスの位置X
	float m_mou_y; //マウスの位置Y
	float px;      //パネルのX幅
	float py;      //パネルのY幅
	int pi;        //パネル一つ分の値X
	int pl;        //パネル一つ分の値Y
	float pp[4];   //パネルに触れた位置X
	float po[4];   //パネルに触れた位置Y
	int j;         //ループ回す用
	int b_pp[16];

	bool  m_mou_l; //マウスの左ボタン
	bool flag;

	int ppx;
	int ppy;

	int ab_pp[4][4];

	int Draw_point;

	bool Victory1_flag;
	bool Victory2_flag;
	bool Draw_flag;
};