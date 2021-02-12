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
#include "Objca.h"
#include "SelectScene.h"

//�R���X�g���N�^
CSceneca::CSceneca(int x,int y,int pp[16])
{
	px = x;
	py = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//�f�X�g���N�^
CSceneca::~CSceneca()
{

}

//�Q�[�����C�����������\�b�h
void CSceneca::InitScene()
{
	Draw::LoadImage(L"Seigo1.png", 20, TEX_SIZE_1024);
	Draw::LoadImage(L"white.png", 0, TEX_SIZE_1024);

	//�w�i�I�u�W�F�N�g�쐬
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 0);

	//�o�͂����镶���̃O���t�B�b�N�쐬
	Font::SetStrTex(L"�����I�I");

	//�����I�u�W�F�N�g�쐬
	CObjca* obji = new CObjca(px,py,b_pp);     
	Objs::InsertObj(obji, OBJ_SEIGO, 1);

	//�J�[�\���쐬
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);

	//�����̎���SE��炷

	Audio::LoadAudio(4, L"seikai.wav", EFFECT);//�{�^������������SE
	Audio::Start(4);

}

//�Q�[�����C�����s�����\�b�h
void CSceneca::Scene()
{

}