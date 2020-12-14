//�g�p����w�b�_�[�t�@�C��
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"

#include "GameHead.h"
#include "Objca.h"
#include "SceneMain.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;


CObjca::CObjca(int x,int y,int pp[16])
{
	px = x;
	py = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
}

//�C�j�V�����C�Y
void CObjca::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;
	flag = true;
}

//�A�N�V����
void CObjca::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();
	

	//�}�E�X�̃{�^���̏��
	m_mou_l = Input::GetMouButtonL();

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��
	if (m_mou_x > 200 && m_mou_x < 605 && m_mou_y>375 && m_mou_y < 445)
	{
		//�}�E�X�̃{�^���������ꂽ�烁�C���ɑJ��
		if (m_mou_l == true)
		{
			//b_pp[(px*4) + py] = 1;
			Scene::SetScene(new CSelectScene(px,py,b_pp));
		}
	}
}

//�h���[
void CObjca::Draw()
{
	float c1[4] = { 1,0,0,1 };

	float c[4] = { 1,1,1,1 };

	//�^�C�g��
	Font::StrDraw(L"����!!", 200, 160, 150, c1);

	Font::StrDraw(L"�p�l���I���֖߂�", 140, 380, 70, c);

}