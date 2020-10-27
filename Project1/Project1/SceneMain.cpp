//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLde使用するヘッダー
#include "GameL/UserData.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneObjManager.h"
#include"GameL/DrawFont.h"
#include<math.h>
#include<stdio.h>


//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include "SceneMain.h"
#include "GameHead.h"



//コンストラクタ
CSceneMain::CSceneMain()
{
	
}

//デストラクタ
CSceneMain::~CSceneMain()
{

}

//ゲームメイン初期化メソッド
void CSceneMain::InitScene()
{
	//カーソル作成
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 1);
	
}

//ゲームメイン実行化メソッド
void CSceneMain::Scene()
{

}

