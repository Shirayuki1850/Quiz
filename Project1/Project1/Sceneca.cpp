//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include "SceneMain.h"
#include "GameHead.h"
#include "Objca.h"

//�R���X�g���N�^
CSceneca::CSceneca()
{

}

//�f�X�g���N�^
CSceneca::~CSceneca()
{

}

//�Q�[�����C�����������\�b�h
void CSceneca::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N�쐬
	Font::SetStrTex(L"�����I�I");

	//�����I�u�W�F�N�g�쐬
	CObjca* obji = new CObjca();     
	Objs::InsertObj(obji, OBJ_SEIGO, 10);
}

//�Q�[�����C�����s�����\�b�h
void CSceneca::Scene()
{

}