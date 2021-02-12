//�g�p����w�b�_�[�t�@�C��
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"
#include"GameL/DrawTexture.h"

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
CObjia::CObjia(float x, float y, int pp[16], int m)
{
	pi = x;
	pl = y;

	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
	mam = m;
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
			Scene::SetScene(new CSceneMain(pi, pl, b_pp, mam));
		}
	}
}

//�h���[
void CObjia::Draw()
{
	float c1[4] = {1,0,0,1 };

	float c[4] = { 1,1,1,1 };

	float c2[4] = { 0,0,0,1 };

	RECT_F src;
	RECT_F dst;

	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 128.0f;
	src.m_bottom = 128.0f;

	dst.m_top = 380.0f;
	dst.m_left = 70.0f;
	dst.m_right = 770.0f;
	dst.m_bottom = 450.0f;

	Draw::Draw(0, &src, &dst, c2, 0);
	//�^�C�g��
	Font::StrDraw(L"�s����", 170, 130, 150, c1);

	Font::StrDraw(L"���������Ă�������", 100, 380, 70, c);

}