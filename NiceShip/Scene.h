#pragma once

//	�V�[�����N���X
class Scene
{
public:
	//	������
	virtual void Initialize() = 0;

	//	�X�V
	virtual void Update() = 0;

	//	���
	virtual void Release() = 0;
};