#pragma once
#include "Dxlib.h"

class GameScene
{
private:

	//����
	int height[4];
	//��
	int width[4];
	//���a
	int radius = 0;
	//���炷
	int boxShift = 0;

	//�ǂ��ɓ��Ă͂߂邩
	int isSelectFlag[4];

	// ���{�^����������Ă�t���O
	bool push_flag = false;

	//�}�E�X��X���AY��
	int mouse_x, mouse_y;

	//�}�E�X�̎擾
	int Mouse;

public:
	void Initialize();

	void Update();

	void Draw();
};

