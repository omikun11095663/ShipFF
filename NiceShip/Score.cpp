#include "Score.h"
#include "GraphFactory.h"
#include "Window.h"

//	�����J�n
void Score::Start()
{
	//	�摜��ǂݍ���
	_numGrp = GraphFactory::Instance().LoadGraph("img\\number.png");

	//	�����̉摜�T�C�Y��ݒ�(60 x 60)
	_imageSize = 60;
}


void Score::Update()
{
	
}

void Score::Render()
{
	int count = _playerScore;
	//6���܂ŕ\������
	for (auto dig = 0; dig < 6; dig++)
	{
		//	�]����v�Z���ꌅ�ڂ̐������Z�o
 		auto num = count %10;

		//std::string s = std::to_string(_playerScore);
		//printfDx(s.data());

		//	�摜��\������i�����ŉ摜�̍��W���킩��悤�Ɂj
		DrawRectGraph((Window::WindowWidth / 2) - dig* _imageSize,static_cast<int>(20),
			num* _imageSize, 0,
			_imageSize,_imageSize,
			_numGrp,
			TRUE);
		count /= 10;
		//���݂̎��Ԃ�10�Ŋ���A����������
		//_playerScore = _playerScore / 10;
		//_playerScore = 5;
	}
}

