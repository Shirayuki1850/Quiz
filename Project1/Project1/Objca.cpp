//�g�p����w�b�_�[�t�@�C��
#include "GameL/DrawFont.h"
#include "GameL/WinInputs.h"

#include "GameHead.h"
#include "Objca.h"
#include "SceneMain.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjca::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;
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
	if (m_mou_x > 350 && m_mou_x < 500 && m_mou_y>300 && m_mou_y < 500)
	{
		//�}�E�X�̃{�^���������ꂽ�烁�C���ɑJ��
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneMain());
		}
	}
}

//�h���[
void CObjca::Draw()
{
	float c1[4] = { 1,0,0,1 };

	float c[4] = { 1,1,1,1 };


	//�^�C�g��
	Font::StrDraw(L"�����I�I", 220, 200, 100, c1);

	Font::StrDraw(L"�p�l����", 300, 380, 50, c);

}