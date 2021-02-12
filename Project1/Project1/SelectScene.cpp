//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include"GameL\DrawTexture.h"
#include "GameL/Audio.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[

#include "SelectScene.h"
#include "GameHead.h"
#include "ObjBackground.h"

//�R���X�g���N�^
CSelectScene::CSelectScene(int x,int y,int pp[16])
{
	px = x;
	py = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//�f�X�g���N�^
CSelectScene::~CSelectScene()
{

}

//�Z���N�g�^�C�g�����������\�b�h
void CSelectScene::InitScene()
{
	Draw::LoadImage(L"japanese1.png", 2, TEX_SIZE_128);
	Draw::LoadImage(L"english1.png", 3, TEX_SIZE_128);
	Draw::LoadImage(L"society1.png", 4, TEX_SIZE_128);
	Draw::LoadImage(L"game1.png", 5, TEX_SIZE_128);
	Draw::LoadImage(L"japanese1.png", 6, TEX_SIZE_128);
	Draw::LoadImage(L"english1.png", 7, TEX_SIZE_128);
	Draw::LoadImage(L"society1.png", 8, TEX_SIZE_128);
	Draw::LoadImage(L"game1.png", 9, TEX_SIZE_128);
	Draw::LoadImage(L"japanese1.png", 10, TEX_SIZE_128);
	Draw::LoadImage(L"english1.png", 11, TEX_SIZE_128);
	Draw::LoadImage(L"society1.png", 12, TEX_SIZE_128);
	Draw::LoadImage(L"game1.png", 13, TEX_SIZE_128);
	Draw::LoadImage(L"japanese1.png", 14, TEX_SIZE_128);
	Draw::LoadImage(L"english1.png", 15, TEX_SIZE_128);
	Draw::LoadImage(L"society1.png", 16, TEX_SIZE_128);
	Draw::LoadImage(L"game1.png", 17, TEX_SIZE_128);
	Draw::LoadImage(L"panel1.png", 18, TEX_SIZE_128);
	Draw::LoadImage(L"panel2.png", 19, TEX_SIZE_128);
	Draw::LoadImage(L"Select2.png", 20, TEX_SIZE_1024);
	Draw::LoadImage(L"white.png", 21, TEX_SIZE_1024);

	CObjSelect* p = new CObjSelect(px,py,b_pp);
	Objs::InsertObj(p, OBJ_TITLE, 1);

	//�w�i�I�u�W�F�N�g�쐬
	CObjBackground* back = new CObjBackground();
	Objs::InsertObj(back, OBJ_BACKGROUND, 1);

	//�J�[�\���쐬
	CObjmouse* obj = new CObjmouse();
	Objs::InsertObj(obj, OBJ_MOUSE, 2);

	//���y���̓ǂݍ���
	Audio::LoadAudio(1, L"BGM2.wav", SOUND_TYPE::BACK_MUSIC);//BGM2
	Audio::LoadAudio(6, L"seikai.wav", EFFECT);//�������ʉ�

	//�o�b�N�~���[�W�b�N�X�^�[�g
	float v = Audio::VolumeMaster(0);//�}�X�^�[�{�����[��
	v = Audio::VolumeMaster((1.0f - v));

	Audio::Start(1);//���y�X�^�[�g
	

	
	
}

//�Q�[���^�C�g�����s���\�b�h
void CSelectScene::Scene()
{

}
