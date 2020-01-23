#include <DxLib.h>
#include "GameClear.h"
#include "GraphFactory.h"
#include "SceneManager.h"

//	������
void GameClear::Initialize()
{
	//	�^�C�g���̔w�i�̉摜�ǂݍ���
	_clearImage = GraphFactory::Instance().LoadGraph("img\\result.png");
}

//	�X�V
void GameClear::Update()
{
	//	�^�C�g����ʂ�\������
	//DrawGraph(0, 0, _titleImage, TRUE);
	DrawExtendGraph(0, 0, 1600, 1280, _clearImage, FALSE);

	//	�L�[���͂��X�V
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (key & PAD_INPUT_10) {
		//	�V�[�����Q�[���V�[���ɐ؂�ւ���
		SceneManager::Instance().LoadScene("Title");
	}
}

//	���
void GameClear::Release()
{
	GraphFactory::Instance().EraseGraph("img\\result.png");
}
