#pragma once
#include "SceneManager.h"

class Manual
{
private:	//�����o�ϐ�

	//�}�j���A���n���h��
	int manualHandle = 0;

	//���݂̃V�[��
	SceneManager scene = SceneManager::MANUAL;

	//���̃V�[��
	SceneManager nextScene = SceneManager::GAMESCENE;

public:		//�����o�֐�

	//�R���X�g���N�^
	Manual();

	//�f�X�g���N�^
	~Manual();

	//������
	void Intialize();

	//�X�V
	void Update(char* keys, char* oldkeys);

	//�`��
	void Draw();

	//���̃V�[���̃Q�b�^�[
	SceneManager GetNextScene() { return nextScene; }
};

