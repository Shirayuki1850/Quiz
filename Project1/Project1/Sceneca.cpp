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
#include "Objca.h"

//コンストラクタ
CSceneca::CSceneca()
{

}

//デストラクタ
CSceneca::~CSceneca()
{

}

//ゲームメイン初期化メソッド
void CSceneca::InitScene()
{
	//出力させる文字のグラフィック作成
	Font::SetStrTex(L"正解！！");

	//正解オブジェクト作成
	CObjca* obji = new CObjca();     
	Objs::InsertObj(obji, OBJ_SEIGO, 10);
}

//ゲームメイン実行中メソッド
void CSceneca::Scene()
{

}