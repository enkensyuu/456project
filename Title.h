#pragma once
#include "SceneManager.h"

class Title
{
private:	//�����o�ϐ�

	//�^�C�g���n���h��
	int titleHandle = 0;

	//���݂̃V�[��
	SceneManager scene = SceneManager::TITLE;

	//���̃V�[��
	SceneManager nextScene = SceneManager::MANUAL;

public:		//�����o�֐�

	//�R���X�g���N�^
	Title();

	//�f�X�g���N�^
	~Title();

	//������
	void Intialize();

	//�X�V
	void Update(char* keys, char* oldkeys);

	//�`��
	void Draw();

	//���̃V�[���̃Q�b�^�[
	SceneManager GetNextScene() { return nextScene; }
};

