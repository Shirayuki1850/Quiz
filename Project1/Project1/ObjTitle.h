#pragma once
//使用するヘッダー
#include "GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：タイトル
class CObjTitle :public CObj//Title
{
public:
	CObjTitle() {};
	~CObjTitle() {};
	void Init();   //イニシャライズ
	void Action(); //アクション
	void Draw();   //ドロー
private:
};