#pragma once
//�g�p����l�[���X�y�[�X
#include"GameL/SceneManager.h"
#include<stdio.h>
#include<math.h>

using namespace GameL;

class CSceneMain :public CScene
{
public:
	CSceneMain(int x,int y);
	~CSceneMain();
	void InitScene();
	void Scene();
private:

	wchar_t str1[100][100];
	wchar_t str2[100];
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	int pi;        //�p�l������̒lX
	int pl;        //�p�l������̒lY

	float m_mou_x; //�}�E�X�̈ʒuX
	float m_mou_y; //�}�E�X�̈ʒuY
	bool  m_mou_l; //�}�E�X�̍��{�^��

	//����Z��
};
