#pragma once
#include "Dxlib.h"

class GameScene
{
private:

	//����
	int height = 0;
	//��
	int weight = 0;
	//���a
	int radius = 0;

	// ���{�^����������Ă�t���O
	bool push_flag = false;

	//�}�E�X��X���AY��
	int mouse_x, mouse_y;

	int Mouse;

public:
	void Initialize();

	void Update();

	void Draw();
};

