//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLde�g�p����w�b�_�[
#include "GameL/UserData.h"
#include"GameL\DrawTexture.h"
#include"GameL\SceneObjManager.h"
#include"GameL/DrawFont.h"
#include<math.h>
#include<stdio.h>


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include "SceneMain.h"
#include "GameHead.h"


//�R���X�g���N�^
CSceneMain::CSceneMain(int x,int y,int pp[16])
{
	pi = x;
	pl = y;
	for (int i = 0; i < 16; i++)
	{
		ans_flag[i] = pp[i];
	}
	
}

//�f�X�g���N�^
CSceneMain::~CSceneMain()
{

}



//�Q�[�����C�����������\�b�h
void CSceneMain::InitScene()
{
	Draw::LoadImage(L"q1.png", 20, TEX_SIZE_1024);

	//�w�i�I�u�W�F�N�g�쐬
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 0);

	CObjMain*p = new CObjMain(pi,pl,ans_flag);
	Objs::InsertObj(p, OBJ_MAIN, 1);

	//�J�[�\���쐬
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);



	
	//	�ǂݍ��݃��[�h�Ńt�@�C�����J��
	/*fopen_s(&fp, "Quiz1.txt", "rb");*/




}

//�Q�[�����C�����s�����\�b�h
void CSceneMain::Scene()
{
		
}

