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
#include "Objia.h"

//�R���X�g���N�^
CSceneia::CSceneia(int x,int y)
{
	pi = x;
	pl = y;


}

//�f�X�g���N�^
CSceneia::~CSceneia()
{

}

//�Q�[�����C�����������\�b�h
void CSceneia::InitScene()
{
	//�o�͂����镶���̃O���t�B�b�N�쐬
	Font::SetStrTex(L"�c�O�A�s�����B�B");

	//�s�����I�u�W�F�N�g�쐬
	CObjia* objj = new CObjia(pi,pl);     
	Objs::InsertObj(objj, OBJ_SEIGO, 10);
}

//�Q�[�����C�����s�����\�b�h
void CSceneia::Scene()
{

}