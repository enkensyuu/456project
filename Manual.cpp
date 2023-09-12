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
	//マニュアル画面の画像のロード
	manualHandle = LoadGraph("Resources/manual.png");

	//シーンの初期化
	scene = SceneManager::MANUAL;

	//次のシーンの初期化
	nextScene = SceneManager::CLEAR;
}

void Manual::Update(char* keys, char* oldkeys)
{
	
}

void Manual::Draw()
{
	//マニュアル画面の描画
	DrawGraph(0, 0, manualHandle, true);
}
