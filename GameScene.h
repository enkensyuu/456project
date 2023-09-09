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

	/// <summary>
	/// ������
	/// </summary>
	void Initialize(int i);

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();

	/// <summary>
	/// �}�E�X�ƃ{�b�N�X�̓����蔻��
	/// </summary>
	void Mouse_Collision();
};

