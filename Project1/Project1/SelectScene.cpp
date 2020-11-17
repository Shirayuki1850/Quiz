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
	Draw::LoadImage(L"game2.png", 3, TEX_SIZE_1024);
	Draw::LoadImage(L"game3.png", 4, TEX_SIZE_1024);
	Draw::LoadImage(L"game4.png", 5, TEX_SIZE_1024);
	Draw::LoadImage(L"japanese1.png", 6, TEX_SIZE_1024);
	Draw::LoadImage(L"japanese2.png", 7, TEX_SIZE_1024);
	Draw::LoadImage(L"japanese3.png", 8, TEX_SIZE_1024);
	Draw::LoadImage(L"japanese4.png", 9, TEX_SIZE_1024);
	Draw::LoadImage(L"math1", 10, TEX_SIZE_1024);
	Draw::LoadImage(L"math2", 11, TEX_SIZE_1024);
	Draw::LoadImage(L"math3", 12, TEX_SIZE_1024);
	Draw::LoadImage(L"math4", 13, TEX_SIZE_1024);
	Draw::LoadImage(L"society1", 14, TEX_SIZE_1024);
	Draw::LoadImage(L"society2", 15, TEX_SIZE_1024);
	Draw::LoadImage(L"society3", 16, TEX_SIZE_1024);
	Draw::LoadImage(L"society4", 17, TEX_SIZE_1024);
	

	CObjSelect* p = new CObjSelect();
	Objs::InsertObj(p, OBJ_TITLE, 1);
}

//ゲームタイトル実行メソッド
void CSelectScene::Scene()
{

}
