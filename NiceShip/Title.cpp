#include <DxLib.h>
#include "Title.h"
#include "GraphFactory.h"
#include "SceneManager.h"

//	������
void Title::Initialize()
{
	//	�^�C�g���̔w�i�̉摜�ǂݍ���
	_titleImage = GraphFactory::Instance().LoadGraph("img\\ShipTitle.png");
}

//	�X�V
void Title::Update()
{
	//	�^�C�g����ʂ�\������
	//DrawGraph(0, 0, _titleImage, TRUE);
	DrawExtendGraph(0, 0, 1600, 1280, _titleImage, FALSE);

	//	�L�[���͂��X�V
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (key & PAD_INPUT_10) {
		//	�V�[�����Q�[���V�[���ɐ؂�ւ���
		SceneManager::Instance().LoadScene("Game");
	}
}

//	���
void Title::Release()
{
	GraphFactory::Instance().EraseGraph("img\\ShipTitle.png");
}
