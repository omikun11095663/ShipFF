#pragma once
#include<cmath>

class Vector2D
{
public:
	//	�f�t�H���g�R���X�g���N�^
	Vector2D();

	//	�����t���R���X�g���N�^
	Vector2D(float x, float y);

	//	���Z�q�I�[�o�[���[�h�u+�v
	Vector2D operator + (const Vector2D& vec);

	//	���Z�q�I�[�o�[���[�h�u+=�v
	Vector2D& operator += (const Vector2D& vec);

	//	���Z�q�I�[�o�[���[�h�u-�v
	Vector2D operator - (const Vector2D& vec);

	//	���Z�q�I�[�o�[���[�h�u-=�v
	Vector2D& operator -= (const Vector2D& vec);

	//	���Z�q�I�[�o�[���[�h�u*�v
	Vector2D operator*(const float & scale);

	//	�x�N�g���̓���
	float Dot(const Vector2D& vec);

	//	�x�N�g���̊O��
	float Cross(const Vector2D& vec);

	//	�x�N�g���̒����擾
	float Magnitude();

	//	�x�N�g���̐��K��
	Vector2D Normalized();

public:
	float x;
	float y;

};
