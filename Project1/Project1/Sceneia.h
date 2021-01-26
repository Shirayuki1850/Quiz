#pragma once
//使用するヘッダー
#include "GameL/SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームタイトル
class CSceneia :public CScene
{
public:
	CSceneia(int x,int y,int pp[16],int m);
	~CSceneia();
	void InitScene();    //ゲームタイトルの初期化メソッド
	void Scene();        //ゲームタイトルの実行中メソッド
private:

	int pi;
	int pl;

	int b_pp[16];

	int mam;
};