#pragma once
//�g�p����w�b�_�[
#include"GameL/SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g:�^�C�g��
class CObjSelect : public CObj
{
public:
	CObjSelect(int x,int y,int pp[16]);
	~CObjSelect() {};
	void Init();   //�C�j�V�����C�Y
	void Action(); //�A�N�V����
    void Draw();   //�h���[
private:

	float m_mou_x; //�}�E�X�̈ʒuX
	float m_mou_y; //�}�E�X�̈ʒuY
	float px;      //�p�l����X��
	float py;      //�p�l����Y��
	int pi;        //�p�l������̒lX
	int pl;        //�p�l������̒lY
	float pp[4];   //�p�l���ɐG�ꂽ�ʒuX
	float po[4];   //�p�l���ɐG�ꂽ�ʒuY
	int j;         //���[�v�񂷗p
	int b_pp[16];

	bool  m_mou_l; //�}�E�X�̍��{�^��
	bool flag;

	int ppx;
	int ppy;

	int ab_pp[4][4];

	int Draw_point;

	bool Victory1_flag;
	bool Victory2_flag;
	bool Draw_flag;
};