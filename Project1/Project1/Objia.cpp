//�g�p����w�b�_�[�t�@�C��
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"

#include "GameHead.h"
#include "Objca.h"
#include "SceneMain.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjia::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;
}

//�R���X�g���N�^
CObjia::CObjia(float x, float y,int pp[16])
{
	pi = x;
	pl = y;

	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//�A�N�V����
void CObjia::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//�}�E�X�̃{�^���̏��
	m_mou_l = Input::GetMouButtonL();

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 235 && m_mou_x < 570 && m_mou_y>375 && m_mou_y < 445)
	{
		//�}�E�X�̃{�^���������ꂽ�烁�C���ɑJ��
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneMain(pi,pl,b_pp));
		}
	}
}

//�h���[
void CObjia::Draw()
{
	float c1[4] = {1,0,0,1 };

	float c[4] = { 1,1,1,1 };

	//�^�C�g��
	Font::StrDraw(L"�s����", 170, 130, 150, c1);

	Font::StrDraw(L"���֖߂�", 235, 380, 70, c);

}