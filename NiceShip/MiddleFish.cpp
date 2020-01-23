#include <DxLib.h>
#include "MiddleFish.h"
#include "GraphFactory.h"

//	����������
void MiddleFish::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\fishB.png");
	_size = Vector2D(128, 128);
	_position = Vector2D(0, 0);

	weight = 0.4;
	score = 1000;

}

//	�`��
void MiddleFish::Render()
{
	LoadGraphScreen(static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		"img\\fishB.png", TRUE);
	/*if (_position.x < 500)
	{
		LoadGraphScreen(static_cast<int>(_position.x),
			static_cast<int>(_position.y),
			"img\\silhouette.png", TRUE);
	}
	else if (_position.x >= 500 && _position.x <= 1980)
	{
		LoadGraphScreen(static_cast<int>(_position.x),
			static_cast<int>(_position.y),
			"img\\fishB.png", TRUE);
	}*/
}

//	�X�V
void MiddleFish::Update()
{
	_position.x += 2;

}

void MiddleFish::Hit()
{

}

//	���
void MiddleFish::Release()
{
}




