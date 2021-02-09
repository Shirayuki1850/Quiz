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

#include "GameL/Audio.h"


//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include "SceneMain.h"
#include "GameHead.h"


//コンストラクタ
CSceneMain::CSceneMain(int x,int y,int pp[16],int m)
{
	pi = x;
	pl = y;
	for (int i = 0; i < 16; i++)
	{
		ans_flag[i] = pp[i];
	}
	
	mam = m;
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

	CObjMain* p = new CObjMain(pi, pl, ans_flag, mam);
	Objs::InsertObj(p, OBJ_MAIN, 1);

	//カーソル作成
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);
	
	//	読み込みモードでファイルを開く
	/*fopen_s(&fp, "Quiz1.txt", "rb");*/

	//音楽情報の読み込み
	Audio::LoadAudio(2, L"BGM3.wav",SOUND_TYPE::BACK_MUSIC);//BGM3

	//バックミュージックスタート
	float v = Audio::VolumeMaster(0);//マスターボリューム
	v = Audio::VolumeMaster((1.0f - v));

	Audio::Start(2);//音楽スタート

	//ボタンが押された時のSEを鳴らす
	Audio::LoadAudio(3, L"botan.wav", EFFECT);//ボタン押した時のSE


}

//ゲームメイン実行化メソッド
void CSceneMain::Scene()
{
		
}

