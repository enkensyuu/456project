#include "Clear.h"
#include "DxLib.h"

Clear::Clear()
{
}

Clear::~Clear()
{
	InitGraph();
}

void Clear::Intialize()
{
	//�N���A��ʂ̉摜�̃��[�h
	clearHandle = LoadGraph("Resources/gameClear.png");

	//�V�[���̏�����
	scene = SceneManager::CLEAR;

	//���̃V�[���̏�����
	nextScene = SceneManager::TITLE;
}

void Clear::Update(char* keys, char* oldkeys)
{
	
}

void Clear::Draw()
{
	//�N���A��ʂ̕`��
	DrawGraph(0, 0, clearHandle, true);
}
