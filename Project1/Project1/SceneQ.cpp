//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"

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
	CObjSelect* p = new CObjSelect();
	Objs::InsertObj(p, OBJ_TITLE, 1);
}

//�Q�[���^�C�g�����s���\�b�h
void CSelectScene::Scene()
{

}