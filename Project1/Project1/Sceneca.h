#pragma once
//�g�p����w�b�_�[
#include "GameL/SceneManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�V�[���F�Q�[���^�C�g��
class CSceneca :public CScene
{
public:
	CSceneca(int x,int y,int pp[16]);
	~CSceneca();
	void InitScene();    //�Q�[���^�C�g���̏��������\�b�h
	void Scene();        //�Q�[���^�C�g���̎��s�����\�b�h
private:

	int b_pp[16];
	int px;
	int py;
};