#pragma once
//�g�p����w�b�_�[
#include"GameL/SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g:�^�C�g��
class CObjSelect : public CObj
{
public:
	CObjSelect() {};
	~CObjSelect() {};
	void Init();   //�C�j�V�����C�Y
	void Action(); //�A�N�V����
    void Draw();   //�h���[
private:

	float m_mou_x; //�}�E�X�̈ʒuX
	float m_mou_y; //�}�E�X�̈ʒuY
	float px;      //�p�l����X��
	float py;      //�p�l����Y��
	int pi;
	float pp[4];   //�p�l���ɐG�ꂽ�ʒu

	bool  m_mou_l; //�}�E�X�̍��{�^��
};