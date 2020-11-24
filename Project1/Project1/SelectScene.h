#pragma once
//使用するヘッダーファイル
#include "GameL/SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームタイトル
class CSelectScene :public CScene
{
public:
	CSelectScene(int x,int y,int pp[16]);
	~CSelectScene();
	void InitScene(); //ゲームタイトルの初期化メソッド
	void Scene();     //ゲームタイトルの実行中メソッド

private:

	int b_pp[16];

	int px;
	int py;

};