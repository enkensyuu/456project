#include "Manual.h"
#include "DxLib.h"

Manual::Manual()
{
}

Manual::~Manual()
{
	InitGraph();
}

void Manual::Intialize()
{
	//�}�j���A����ʂ̉摜�̃��[�h
	manualHandle = LoadGraph("Resources/manual.png");

	//�V�[���̏�����
	scene = SceneManager::MANUAL;

	//���̃V�[���̏�����
	nextScene = SceneManager::CLEAR;
}

void Manual::Update(char* keys, char* oldkeys)
{
	//�V�[���̐؂�ւ�
	if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
	{
		scene = nextScene;
	}
}

void Manual::Draw()
{
	//�}�j���A����ʂ̕`��
	DrawGraph(0, 0, manualHandle, true);
}
