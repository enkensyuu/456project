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
}

void Manual::Update(char* keys, char* oldkeys)
{
	
}

void Manual::Draw()
{
	//�}�j���A����ʂ̕`��
	DrawGraph(0, 0, manualHandle, true);
}
