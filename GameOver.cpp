#include "GameOver.h"
#include "DxLib.h"

GameOver::GameOver()
{
}

GameOver::~GameOver()
{
	InitGraph();
}

void GameOver::Intialize()
{
	//�Q�[���I�[�o�[��ʂ̉摜�̃��[�h
	gameOverHandle = LoadGraph("Resources/gameover.png");

	//�V�[���̏�����
	scene = SceneManager::GAMEOVER;

	//���̃V�[���̏�����
	nextScene = SceneManager::TITLE;
}

void GameOver::Update(char* keys, char* oldkeys)
{
	
}

void GameOver::Draw()
{
	//�Q�[���I�[�o�[��ʂ̕`��
	DrawGraph(0, 0, gameOverHandle, true);
}
