//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include"GameL\DrawTexture.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include "SelectScene.h"
#include "GameHead.h"

//コンストラクタ
CSelectScene::CSelectScene()
{

}

//デストラクタ
CSelectScene::~CSelectScene()
{

}

//セレクトタイトル初期化メソッド
void CSelectScene::InitScene()
{

	Draw::LoadImage(L"game1.png", 2, TEX_SIZE_1024);
	Draw::LoadImage(L"panel1.png", 3, TEX_SIZE_1024);

	CObjSelect* p = new CObjSelect();
	Objs::InsertObj(p, OBJ_TITLE, 1);
}

//ゲームタイトル実行メソッド
void CSelectScene::Scene()
{

}
