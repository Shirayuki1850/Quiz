//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include "GameL/DrawTexture.h"
#include "GameL/WinInputs.h"


//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include "SceneMain.h"
#include "GameHead.h"
#include "Objia.h"

//コンストラクタ
CSceneia::CSceneia(int x,int y,int pp[16])
{
	pi = x;
	pl = y;

	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//デストラクタ
CSceneia::~CSceneia()
{

}

//ゲームメイン初期化メソッド
void CSceneia::InitScene()
{
	Draw::LoadImage(L"Seigo1.png", 20, TEX_SIZE_1024);

	//背景オブジェクト作成
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 0);

	//出力させる文字のグラフィック作成
	Font::SetStrTex(L"残念、不正解。。");

	//不正解オブジェクト作成
	CObjia* objj = new CObjia(pi,pl,b_pp);     
	Objs::InsertObj(objj, OBJ_SEIGO, 10);

	//カーソル作成
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);
}

//ゲームメイン実行中メソッド
void CSceneia::Scene()
{

}