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
CSceneMain::CSceneMain(int x,int y)
{
	pi = x;
	pl = y;


}

//デストラクタ
CSceneMain::~CSceneMain()
{

}



//ゲームメイン初期化メソッド
void CSceneMain::InitScene()
{
	CObjMain*p = new CObjMain(pi,pl);
	Objs::InsertObj(p, OBJ_MAIN, 1);

	//カーソル作成
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);

	FILE* fp=0;

	
	//	読み込みモードでファイルを開く
	/*fopen_s(&fp, "Quiz1.txt", "rb");*/

	switch (pi)
		{
		case 0:
			switch (pl)
			{
			case 0: fopen_s(&fp, "Quiz1.txt", "rb");
				break;
			case 1: fopen_s(&fp, "Quiz2.txt", "rb");
				break;
			case 2: fopen_s(&fp, "Quiz3.txt", "rb");
				break;
			case 3: fopen_s(&fp, "Quiz4.txt", "rb");
				break;
			}
			break;

		case 1:
			switch (pl)
			{
			case 0: fopen_s(&fp, "Quiz5.txt", "rb");
				break;
			case 1: fopen_s(&fp, "Quiz6.txt", "rb");
				break;
			case 2: fopen_s(&fp, "Quiz7.txt", "rb");
				break;
			case 3: fopen_s(&fp, "Quiz8.txt", "rb");
				break;
			}
			break;
		case 2:
			switch (pl)
			{
			case 0: fopen_s(&fp, "Quiz9.txt", "rb");
				break;
			case 1: fopen_s(&fp, "Quiz10txt", "rb");
				break;
			case 2: fopen_s(&fp, "Quiz11.txt", "rb");
				break;
			case 3: fopen_s(&fp, "Quiz12.txt", "rb");
				break;
			}
			break;
		case 3:
			switch (pl)
			{
			case 0: fopen_s(&fp, "Quiz13.txt", "rb");
				break;
			case 1: fopen_s(&fp, "Quiz14.txt", "rb");
				break;
			case 2: fopen_s(&fp, "Quiz15.txt", "rb");
				break;
			case 3: fopen_s(&fp, "Quiz16.txt", "rb");
				break;
			}
			break;

		}
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

