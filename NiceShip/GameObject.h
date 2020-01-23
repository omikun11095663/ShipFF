#pragma once
#include "Vector2D.h"
#include "DxLib.h"

//	�Q�[���I�u�W�F�N�g�N���X
class GameObject
{
public:
	//	�R���X�g���N�^
	GameObject() : _position(0, 0), _size(0, 0) {}

	//	�J�n
	virtual void Start() = 0;

	//	�`��
	virtual void Render() = 0;

	//	�X�V
	virtual void Update() = 0;

	//	���
	virtual void Release() = 0;

	//�����蔻��
	virtual void Hit() = 0;

	//�@

	//	��Tips�����o�֐���const��t�^���鎖��
	//	���̊֐����ł̃����o�ϐ��̕ύX���֎~�ɂ���
	Vector2D Position() const { return _position; }
	Vector2D Size() const { return _size; }

	float Radius() const { return _radius; }
	float Rotate() const { return _rotate; }
	float Sin() const { return _sin; }
	float Cos() const { return _cos; }
	float Speed() const { return _speed; }

	VECTOR PlayerPos() { return playerPos; }
	VECTOR Pos() { return _pos; }
	VECTOR Vec() { return _vec; }

public:
	Vector2D _position;		//	���W
	Vector2D _size;			//	�T�C�Y

	VECTOR playerPos;
	VECTOR _pos;
	VECTOR _vec;

	float _radius;			//	���a
	float _rotate;          //  ��]
	float _speed;         //
	float _sin;           //  
	float _cos;           //  

	int maxLimit;
	int minLimit;
	int upSpeed;
	int downSpeed;

	float weight; // �d��
	float weightL; // �d��
	float weightM; // �d��
	float weightS; // �d��
	float weightSp; // �d��

	int score;// �X�R�A
};