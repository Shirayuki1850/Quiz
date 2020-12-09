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
CSceneMain::CSceneMain(int x,int y,int pp[16])
{
	pi = x;
	pl = y;
	for (int i = 0; i < 16; i++)
	{
		ans_flag[i] = pp[i];
	}
	
}

//デストラクタ
CSceneMain::~CSceneMain()
{

}



//ゲームメイン初期化メソッド
void CSceneMain::InitScene()
{
	Draw::LoadImage(L"q1.png", 20, TEX_SIZE_1024);

	//背景オブジェクト作成
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 0);

	CObjMain*p = new CObjMain(pi,pl,ans_flag);
	Objs::InsertObj(p, OBJ_MAIN, 1);

	//カーソル作成
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);



	
	//	読み込みモードでファイルを開く
	/*fopen_s(&fp, "Quiz1.txt", "rb");*/




}

//ゲームメイン実行化メソッド
void CSceneMain::Scene()
{
		
}

