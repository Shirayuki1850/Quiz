#pragma once
//�g�p����w�b�_�[
#include "GameL/SceneManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[���F�Q�[���^�C�g��
class CSceneia :public CScene
{
public:
	CSceneia(int x,int y,int pp[16],int m);
	~CSceneia();
	void InitScene();    //�Q�[���^�C�g���̏��������\�b�h
	void Scene();        //�Q�[���^�C�g���̎��s�����\�b�h
private:

	int pi;
	int pl;

	int b_pp[16];

	int mam;
};