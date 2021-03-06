//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include "GameL/DrawTexture.h"
#include "GameL/WinInputs.h"
#include "GameL/Audio.h"

//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include "SceneMain.h"
#include "GameHead.h"
#include "Objca.h"
#include "SelectScene.h"

//コンストラクタ
CSceneca::CSceneca(int x,int y,int pp[16])
{
	px = x;
	py = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//デストラクタ
CSceneca::~CSceneca()
{

}

//ゲームメイン初期化メソッド
void CSceneca::InitScene()
{
	Draw::LoadImage(L"Seigo1.png", 20, TEX_SIZE_1024);
	Draw::LoadImage(L"white.png", 0, TEX_SIZE_1024);

	//背景オブジェクト作成
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 0);

	//出力させる文字のグラフィック作成
	Font::SetStrTex(L"正解！！");

	//正解オブジェクト作成
	CObjca* obji = new CObjca(px,py,b_pp);     
	Objs::InsertObj(obji, OBJ_SEIGO, 1);

	//カーソル作成
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);

	//正解の時のSEを鳴らす

	Audio::LoadAudio(4, L"seikai.wav", EFFECT);//ボタン押した時のSE
	Audio::Start(4);

}

//ゲームメイン実行中メソッド
void CSceneca::Scene()
{

}