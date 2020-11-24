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
#include "Objia.h"

//コンストラクタ
CSceneia::CSceneia(int x,int y)
{
	pi = x;
	pl = y;


}

//デストラクタ
CSceneia::~CSceneia()
{

}

//ゲームメイン初期化メソッド
void CSceneia::InitScene()
{
	//出力させる文字のグラフィック作成
	Font::SetStrTex(L"残念、不正解。。");

	//不正解オブジェクト作成
	CObjia* objj = new CObjia(pi,pl);     
	Objs::InsertObj(objj, OBJ_SEIGO, 10);
}

//ゲームメイン実行中メソッド
void CSceneia::Scene()
{

}