#pragma once
#include "Vector2D.h"
#include "GameObject.h"
#include "LargeFish.h"
#include "MiddleFish.h"
#include "SmallFish.h"
#include "Special.h"

//	�v���C���[�N���X
//	��GameObject�N���X���p������
class Player : public GameObject
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
	void Hit();
	void Hit(LargeFish l);
	void Hit(MiddleFish m);
	void Hit(SmallFish s);
	void Hit(Special sp);


	//�{�^��
	int OnButton;

	// ���
	void UpdatePosition(bool hitX, bool hitY);

	//	���x���擾
	Vector2D Velocity()
	{
		return _velocity;
	}
	Vector2D Angle()
	{
		return _angle;
	}

	VECTOR PlayerPos()
	{
		return playerPos;
	}
	VECTOR Pos()
	{
		return _pos;
	}
	VECTOR Vec()
	{
		return _vec;
	}

public:
	//	�摜�n���h��
	int _grp;
	float playerWid;
	float playerHei;
	float maxLimit;
	float minLimit;
	float upSpeed;
	float downSpeed;
	float stop;
	bool hitLFlag;
	bool hitMFlag;
	bool hitSFlag;
	bool hitSpFlag;

	int _numGrp;//Player_Score_image

	int _SoundHandle;
	//��A
	LargeFish _largeFish;

	//��B
	MiddleFish _middleFish;

	//��C
	SmallFish _smallFish;

	//���X�y�V����
	Special _special;

	Vector2D _velocity;
	Vector2D _angle;
	VECTOR playerPos;
	VECTOR _pos;
	VECTOR _vec;

	//LargeFish L;

};