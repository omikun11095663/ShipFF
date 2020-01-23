#pragma once
#include "Vector2D.h"
#include "GameObject.h"

//	�v���C���[�N���X
//	��GameObject�N���X���p������
class SmallFish : public GameObject
{
public:
	//	�J�n
	//	��override�C���q���g�p���邱�Ƃ�
	//	���̃����o�֐������N���X�ɑ��݂��Ȃ��ꍇ�A�G���[���o�͂���
	void Start() override;

	//	�`��
	void Render()  override;

	//	�X�V
	void Update()  override;

	// ���
	void Release()  override;

	//�����蔻��
	void Hit() override;

	//�{�^��
	int OnButton;

	// ���
	void UpdatePosition(bool hitX, bool hitY);

	//	���x���擾
	Vector2D Velocity() {
		return _velocity;
	}
public:
	//	�摜�n���h��
	int _grp;

	Vector2D _velocity;
	Vector2D _position;
};