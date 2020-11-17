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
	CObjMain*p = new CObjMain();
	Objs::InsertObj(p, OBJ_MAIN, 1);

	//カーソル作成
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);

	FILE* fp;

	
	//	読み込みモードでファイルを開く
	fopen_s(&fp, "Quiz1.txt", "rb");
	for (int i = 0; i < 100; i++)
		fgetws(str1[i], 99, fp);
		
	fclose(fp);
}

//ゲームメイン実行化メソッド
void CSceneMain::Scene()
{
	int x=0;

	for (int i = 0; i < 5; i++)
	{
		swprintf(str2, L"%s", str1[i]);
		Font::StrDraw(str2, 0, 5 * i+x, 25, c);

		x += 50;
	}
		
}

