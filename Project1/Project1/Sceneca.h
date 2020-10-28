#pragma once
//使用するヘッダー
#include "GameL/SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームタイトル
class CSceneca :public CScene
{
public:
	CSceneca();
	~CSceneca();
	void InitScene();    //ゲームタイトルの初期化メソッド
	void Scene();        //ゲームタイトルの実行中メソッド
private:
};