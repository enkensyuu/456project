#include "Title.h"
#include "DxLib.h"

Title::Title()
{
}

Title::~Title()
{
	InitGraph();
}

void Title::Intialize()
{
	//�^�C�g����ʂ̉摜�̃��[�h
	titleHandle = LoadGraph("Resources/title.png");

	//�V�[���̏�����
	scene = SceneManager::TITLE;

	//���̃V�[���̏�����
	nextScene = SceneManager::MANUAL;
}

void Title::Update(char* keys, char* oldkeys)
{
	//�V�[���̐؂�ւ�
	if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
	{
		scene = nextScene;
	}
}

void Title::Draw()
{
	//�^�C�g����ʂ̕`��
	DrawGraph(0, 0, titleHandle, true);
}
