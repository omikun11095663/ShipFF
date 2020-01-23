#include <DxLib.h>
#include <string>
#include "Window.h"
#include "SceneManager.h"
#include "GamePlay.h"
#include "Title.h"
#include "GameClear.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//	Window���[�h�̐ݒ��Window�^�C�g����ݒ肷��
	ChangeWindowMode(true);
	//SetMainWindowText("");

	//	��ʃT�C�Y��ݒ�
	SetGraphMode(Window::WindowWidth, Window::WindowHeight, 16);
	if (DxLib_Init() == -1)	// �c�w���C�u��������������
	{
		return -1;				// �G���[���N�����璼���ɏI��
	}

	//	�`�����w��
	SetDrawScreen(DX_SCREEN_BACK);

	//	��ʔw�i�̐F��ݒ肷��
	SetBackgroundColor(0, 0, 0);

	// �V�[����ǉ�����
	SceneManager::Instance().AddScene("Title", new Title);
	SceneManager::Instance().AddScene("Game", new GamePlay);
	SceneManager::Instance().AddScene("Clear", new GameClear);

	//	�V�[���Ǘ��N���X�ŊJ�n�V�[����o�^
	SceneManager::Instance().StartScene("Title");
	//SceneManager::Instance().StartScene("Game");

	//	���s
	SceneManager::Instance().Update();

	//	�������
	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;					// �\�t�g�̏I��
}