#pragma once
#include "SceneManager.h"

class GameOver
{
private:	//�����o�ϐ�

	//�Q�[���I�[�o�[�n���h��
	int gameOverHandle = 0;

	//���݂̃V�[��
	SceneManager scene = SceneManager::GAMEOVER;

	//���̃V�[��
	SceneManager nextScene = SceneManager::TITLE;

public:		//�����o�֐�

	//�R���X�g���N�^
	GameOver();

	//�f�X�g���N�^
	~GameOver();

	//������
	void Intialize();

	//�X�V
	void Update(char* keys, char* oldkeys);

	//�`��
	void Draw();
};

