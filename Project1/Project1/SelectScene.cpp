//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include"GameL\DrawTexture.h"
#include "GameL/Audio.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー

#include "SelectScene.h"
#include "GameHead.h"
#include "ObjBackground.h"

//コンストラクタ
CSelectScene::CSelectScene(int x,int y,int pp[16])
{
	px = x;
	py = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//デストラクタ
CSelectScene::~CSelectScene()
{

}

//セレクトタイトル初期化メソッド
void CSelectScene::InitScene()
{
	Draw::LoadImage(L"japanese1.png", 2, TEX_SIZE_128);
	Draw::LoadImage(L"english1.png", 3, TEX_SIZE_128);
	Draw::LoadImage(L"society1.png", 4, TEX_SIZE_128);
	Draw::LoadImage(L"game1.png", 5, TEX_SIZE_128);
	Draw::LoadImage(L"japanese1.png", 6, TEX_SIZE_128);
	Draw::LoadImage(L"english1.png", 7, TEX_SIZE_128);
	Draw::LoadImage(L"society1.png", 8, TEX_SIZE_128);
	Draw::LoadImage(L"game1.png", 9, TEX_SIZE_128);
	Draw::LoadImage(L"japanese1.png", 10, TEX_SIZE_128);
	Draw::LoadImage(L"english1.png", 11, TEX_SIZE_128);
	Draw::LoadImage(L"society1.png", 12, TEX_SIZE_128);
	Draw::LoadImage(L"game1.png", 13, TEX_SIZE_128);
	Draw::LoadImage(L"japanese1.png", 14, TEX_SIZE_128);
	Draw::LoadImage(L"english1.png", 15, TEX_SIZE_128);
	Draw::LoadImage(L"society1.png", 16, TEX_SIZE_128);
	Draw::LoadImage(L"game1.png", 17, TEX_SIZE_128);
	Draw::LoadImage(L"panel1.png", 18, TEX_SIZE_128);
	Draw::LoadImage(L"panel2.png", 19, TEX_SIZE_128);
	Draw::LoadImage(L"Select2.png", 20, TEX_SIZE_1024);
	Draw::LoadImage(L"white.png", 21, TEX_SIZE_1024);

	CObjSelect* p = new CObjSelect(px,py,b_pp);
	Objs::InsertObj(p, OBJ_TITLE, 1);

	//背景オブジェクト作成
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 1);

	//カーソル作成
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);

	//音楽情報の読み込み
	Audio::LoadAudio(1, L"BGM2.wav", SOUND_TYPE::BACK_MUSIC);//BGM2
	Audio::LoadAudio(6, L"seikai.wav", EFFECT);//勝利効果音

	//バックミュージックスタート
	float v = Audio::VolumeMaster(0);//マスターボリューム
	v = Audio::VolumeMaster((1.0f - v));

	Audio::Start(1);//音楽スタート
	

	
	
}

//ゲームタイトル実行メソッド
void CSelectScene::Scene()
{

}
