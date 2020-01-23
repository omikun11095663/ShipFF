#include <DxLib.h>
#include "Port.h"
#include "GraphFactory.h"

//	����������
void Port::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\minato.png");
	_size = Vector2D(600, 128);
	_position = Vector2D(500, 735);
}

//	�`��
void Port::Render()
{
	LoadGraphScreen(static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		"img\\minato.png", FALSE);
}

//	�X�V
void Port::Update()
{

}

void Port::Hit()
{

}

//	���
void Port::Release()
{
}




