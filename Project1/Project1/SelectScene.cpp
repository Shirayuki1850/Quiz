//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include"GameL\DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include "SelectScene.h"
#include "GameHead.h"

//�R���X�g���N�^
CSelectScene::CSelectScene()
{

}

//�f�X�g���N�^
CSelectScene::~CSelectScene()
{

}

//�Z���N�g�^�C�g�����������\�b�h
void CSelectScene::InitScene()
{
	Draw::LoadImage(L"japanese1.png", 2, TEX_SIZE_1024);
	Draw::LoadImage(L"japanese2.png", 3, TEX_SIZE_1024);
	Draw::LoadImage(L"japanese3.png", 4, TEX_SIZE_1024);
	Draw::LoadImage(L"japanese4.png", 5, TEX_SIZE_1024);
	Draw::LoadImage(L"english1.png", 6, TEX_SIZE_1024);
	Draw::LoadImage(L"english2.png", 7, TEX_SIZE_1024);
	Draw::LoadImage(L"english3.png", 8, TEX_SIZE_1024);
	Draw::LoadImage(L"english4.png", 9, TEX_SIZE_1024);
	Draw::LoadImage(L"society1.png", 10, TEX_SIZE_1024);
	Draw::LoadImage(L"society2.png", 11, TEX_SIZE_1024);
	Draw::LoadImage(L"society3.png", 12, TEX_SIZE_1024);
	Draw::LoadImage(L"society4.png", 13, TEX_SIZE_1024);
	Draw::LoadImage(L"game1.png", 14, TEX_SIZE_1024);
	Draw::LoadImage(L"game2.png",15, TEX_SIZE_1024);
	Draw::LoadImage(L"game3.png", 16, TEX_SIZE_1024);
	Draw::LoadImage(L"game4.png", 17, TEX_SIZE_1024);
	

	CObjSelect* p = new CObjSelect();
	Objs::InsertObj(p, OBJ_TITLE, 1);
}

//�Q�[���^�C�g�����s���\�b�h
void CSelectScene::Scene()
{

}
