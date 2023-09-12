#pragma once
#include "SceneManager.h"

class Clear
{
private:	//�����o�ϐ�

	//�N���A�n���h��
	int clearHandle = 0;

	//���݂̃V�[��
	SceneManager scene = SceneManager::CLEAR;

	//���̃V�[��
	SceneManager nextScene = SceneManager::TITLE;

public:		//�����o�֐�

	//�R���X�g���N�^
	Clear();

	//�f�X�g���N�^
	~Clear();

	//������
	void Intialize();

	//�X�V
	void Update(char* keys, char* oldkeys);

	//�`��
	void Draw();

	//���̃V�[���̃Q�b�^�[
	SceneManager GetNextScene() { return nextScene; }
};

