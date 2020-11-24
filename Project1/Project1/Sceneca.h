#pragma once
//使用するヘッダー
#include "GameL/SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームタイトル
class CSceneca :public CScene
{
public:
	CSceneca(int x,int y,int pp[16]);
	~CSceneca();
	void InitScene();    //ゲームタイトルの初期化メソッド
	void Scene();        //ゲームタイトルの実行中メソッド
private:

	int b_pp[16];
	int px;
	int py;
};