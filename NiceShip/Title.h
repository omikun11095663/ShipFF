#pragma once
#include"Scene.h"

//�^�C�g����ʃV�[��
class Title :public Scene
{
public:
	//������
	void Initialize();

	//�X�V
	void Update();

	//���
	void Release();

private:

	//�^�C�g���̔w�i
	int _titleImage;
};