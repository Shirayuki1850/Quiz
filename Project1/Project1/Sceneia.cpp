//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include "GameL/DrawTexture.h"
#include "GameL/WinInputs.h"
#include "GameL/Audio.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include "SceneMain.h"
#include "GameHead.h"
#include "Objia.h"

//�R���X�g���N�^
CSceneia::CSceneia(int x,int y,int pp[16],int m)
{
	pi = x;
	pl = y;

	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
	mam = m;
}

//�f�X�g���N�^
CSceneia::~CSceneia()
{

}

//�Q�[�����C�����������\�b�h
void CSceneia::InitScene()
{
	Draw::LoadImage(L"Seigo1.png", 20, TEX_SIZE_1024);
	Draw::LoadImage(L"white.png", 0, TEX_SIZE_1024);

	//�w�i�I�u�W�F�N�g�쐬
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 0);

	//�o�͂����镶���̃O���t�B�b�N�쐬
	Font::SetStrTex(L"�c�O�A�s����");

	//�s�����I�u�W�F�N�g�쐬
	CObjia* objj = new CObjia(pi, pl, b_pp, mam);
	Objs::InsertObj(objj, OBJ_SEIGO, 1);

	//�J�[�\���쐬
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);

	//�s�����̎��̎���SE��炷
	Audio::LoadAudio(5, L"huseikai.wav", EFFECT);//�{�^������������SE
	Audio::Start(5);
}

//�Q�[�����C�����s�����\�b�h
void CSceneia::Scene()
{

}