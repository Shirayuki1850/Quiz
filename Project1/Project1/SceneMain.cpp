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
CSceneMain::CSceneMain()
{
	
}

//�f�X�g���N�^
CSceneMain::~CSceneMain()
{

}



//�Q�[�����C�����������\�b�h
void CSceneMain::InitScene()
{
	CObjMain*p = new CObjMain();
	Objs::InsertObj(p, OBJ_MAIN, 1);

	//�J�[�\���쐬
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);

	FILE* fp;

	
	//	�ǂݍ��݃��[�h�Ńt�@�C�����J��
	fopen_s(&fp, "Quiz1.txt", "rb");
	for (int i = 0; i < 100; i++)
		fgetws(str1[i], 99, fp);
		
	fclose(fp);
}

//�Q�[�����C�����s�����\�b�h
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

