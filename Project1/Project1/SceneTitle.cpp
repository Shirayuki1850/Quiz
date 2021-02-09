//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"
#include"GameL\DrawTexture.h"
#include "GameL/Audio.h"


//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include "SceneMain.h"
#include "GameHead.h"
#include "ObjTitle.h"
#include "ObjBackground.h"

//コンストラクタ
CSceneTitle::CSceneTitle()
{

}

//デストラクタ
CSceneTitle::~CSceneTitle()
{

}

//ゲームメイン初期化メソッド
void CSceneTitle::InitScene()
{
	Draw::LoadImage(L"Title1.png", 20, TEX_SIZE_1024);

	//出力させる文字のグラフィック作成
	Font::SetStrTex(L"Re：Panel Connection");

	//タイトルオブジェクト作成
	CObjTitle*obj = new CObjTitle();     //タイトルオブジェクト作成
	Objs::InsertObj(obj, OBJ_TITLE, 10);

	//背景オブジェクト作成
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 1);

	//カーソル作成
	CObjmouse* obj1 = new CObjmouse();
	Objs::InsertObj(obj1, OBJ_MOUSE, 2);
	
	Audio::LoadAudio(0, L"BGM1.wav", SOUND_TYPE::BACK_MUSIC);//BGM1
	
	//バックミュージックスタート
	float v = Audio::VolumeMaster(0);//マスターボリューム
	v = Audio::VolumeMaster((1.0f - v));

	Audio::Start(0);//音楽スタート

}

//ゲームメイン実行中メソッド
void CSceneTitle::Scene()
{

}