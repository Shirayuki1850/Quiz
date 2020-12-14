//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"
#include"GameL\DrawTexture.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include "SceneMain.h"
#include "GameHead.h"
#include "ObjTitle.h"
#include "ObjBackground.h"

//�R���X�g���N�^
CSceneTitle::CSceneTitle()
{

}

//�f�X�g���N�^
CSceneTitle::~CSceneTitle()
{

}

//�Q�[�����C�����������\�b�h
void CSceneTitle::InitScene()
{
	Draw::LoadImage(L"Title1.png", 20, TEX_SIZE_1024);

	//�o�͂����镶���̃O���t�B�b�N�쐬
	Font::SetStrTex(L"Re�FPanel Connection");

	//�^�C�g���I�u�W�F�N�g�쐬
	CObjTitle*obj = new CObjTitle();     //�^�C�g���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_TITLE, 10);

	//�w�i�I�u�W�F�N�g�쐬
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 1);

	//�J�[�\���쐬
	CObjmouse* obj1 = new CObjmouse();
	Objs::InsertObj(obj1, OBJ_MOUSE, 2);
	
}

//�Q�[�����C�����s�����\�b�h
void CSceneTitle::Scene()
{

}