//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)


#include "GameL/\DrawTexture.h"
#include "GameL/WinInputs.h"
#include "GameL/SceneManager.h"
#include "GameL/\DrawFont.h"

#include "ObjMain.h"
#include "GameHead.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjMain::CObjMain(float x, float y,int pp[16])
{
	pi = x;
	pl = y;
	for (int i = 0; i < 16; i++)
	{
		b_pp[i] = pp[i];
	}
	
}

//�C�j�V�����C�Y
void CObjMain::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;
	m_mou_l = false;

	f = false;
	f2 = false;
}

//�A�N�V����
void CObjMain::Action()
{

	if (Input::GetVKey('F') == true&&f==false) //1P
	{

		f = true;
		f2 = false;
	}
	if (f == true)
	{
		float c1[4] = { 1,0,0,1 };

		Font::StrDraw(L"1P�������ǂ����B", 210, 350, 50, c1);
	}

	if (Input::GetVKey('J') == true &&f2==false)//2P
	{
		f2 = true;
		f = false;
		
	}
	if (f2 == true)
	{
		float c2[4] = { 0,0.6,1,1 };

		Font::StrDraw(L"2P�������ǂ����B", 210, 400, 50, c2);
	}

	if (Input::GetVKey(VK_SPACE) == true)
	{
		f = false;
		f2 = false;
	}
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//�}�E�X�̃{�^���̏��
	m_mou_l = Input::GetMouButtonL();


	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��(�I�����P)
	if (m_mou_x > 7 && m_mou_x < 15 && m_mou_y>60 && m_mou_y < 70)
	{
		//�}�E�X�̃{�^���������ꂽ�烁�C���ɑJ��
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneca(pi,pl,b_pp));
		}
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��i�I�����Q�j
	if (m_mou_x > 7 && m_mou_x < 15 && m_mou_y>115 && m_mou_y < 125)
	{
		//�}�E�X�̃{�^���������ꂽ�烁�C���ɑJ��
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia(pi,pl,b_pp));
		}
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��i�I�����R�j
	if (m_mou_x > 7 && m_mou_x < 15 && m_mou_y>170 && m_mou_y < 180)
	{
		//�}�E�X�̃{�^���������ꂽ�烁�C���ɑJ��
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia(pi,pl,b_pp));
		}
	}

	//�}�E�X�̈ʒu�ƃN���b�N����ꏊ�œ����蔻��i�I�����S�j
	if (m_mou_x > 7 && m_mou_x < 15 && m_mou_y>225 && m_mou_y < 235)
	{
		//�}�E�X�̃{�^���������ꂽ�烁�C���ɑJ��
		if (m_mou_l == true)
		{
			Scene::SetScene(new CSceneia(pi,pl,b_pp));
		}
	}
}

//�h���[
void CObjMain::Draw()
{

}