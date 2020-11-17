//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"


//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include "SceneMain.h"
#include "GameHead.h"
#include "ObjTitle.h"

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
	//出力させる文字のグラフィック作成
	Font::SetStrTex(L"繋がりクイズ");

	//タイトルオブジェクト作成
	CObjTitle*obj = new CObjTitle();     //タイトルオブジェクト作成
	Objs::InsertObj(obj, OBJ_TITLE, 10);

	
}

//ゲームメイン実行中メソッド
void CSceneTitle::Scene()
{

}