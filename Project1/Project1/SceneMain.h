#pragma once
//使用するネームスペース
#include"GameL/SceneManager.h"
#include<stdio.h>
#include<math.h>

using namespace GameL;

class CSceneMain :public CScene
{
public:
	CSceneMain();
	~CSceneMain();
	void InitScene();
	void Scene();
private:

	wchar_t str1[100][100];
	wchar_t str2[100];
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	float m_mou_x; //マウスの位置X
	float m_mou_y; //マウスの位置Y
	bool  m_mou_l; //マウスの左ボタン
};
