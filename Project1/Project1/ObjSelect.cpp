//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL/SceneManager.h"
#include"GameL/DrawFont.h"

#include"ObjSelect.h"
#include "SceneMain.h"
#include "GameHead.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjSelect::Init()
{
	m_mou_x = 0.0f;
	m_mou_y = 0.0f;

	m_mou_l = false;
}

//�A�N�V����
void CObjSelect::Action()
{
	//�}�E�X�̈ʒu���擾
	m_mou_x = (float)Input::GetPosX();
	m_mou_y = (float)Input::GetPosY();

	//�}�E�X�̃{�^���̏��
	m_mou_l = Input::GetMouButtonL();
}

//�h���[
void CObjSelect::Draw()
{
	float c[4] = { 1,1,1,1 };

   //����
   Font::StrDraw(L"�W��������I�����Ă�������\n", 200, 250, 40, c);
   
   //�W���������N���b�N����ꏊ
   Font::StrDraw(L"����\n", 230, 400, 30, c);

   Font::StrDraw(L"�O����\n", 230, 400, 30, c);

   Font::StrDraw(L"�Љ�\n", 230, 400, 30, c);

   Font::StrDraw(L"�Q�[���֘A\n", 230, 400, 30, c);
	
}