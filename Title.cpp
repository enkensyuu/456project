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
}

void Title::Update(char* keys, char* oldkeys)
{
	
}

void Title::Draw()
{
	//�^�C�g����ʂ̕`��
	DrawGraph(0, 0, titleHandle, true);
}
