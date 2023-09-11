#pragma once
#include "Dxlib.h"

class GameScene_3 {
private:

	//����
	int height[8];
	//��
	int width[8];

	//�����̕\��
	int image[8];

	//�I�Ԕ�X
	int selectHeight[4];
	//�I�Ԕ�Y
	int selectWidth[4];
	//���a
	int radius = 0;

	//�ǂ��ɓ��Ă͂߂邩
	int isSelectFlag[4];

	// ���{�^����������Ă�t���O
	bool push_flag = false;

	//�{�b�N�X���w�肳��Ă��邩
	int isBoxFlag[4];

	//�}�E�X��X���AY��
	int mouse_x, mouse_y;

	//�}�E�X�̎擾
	int Mouse;

public:

	/// <summary>
	/// ������
	/// </summary>
	void Initialize();

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();
};

