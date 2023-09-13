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
	//クリア画面の画像のロード
	clearHandle = LoadGraph("Resources/gameClear.png");

	//シーンの初期化
	scene = SceneManager::CLEAR;

	//次のシーンの初期化
	nextScene = SceneManager::TITLE;
}

void Clear::Update(char* keys, char* oldkeys)
{
	
}

void Clear::Draw()
{
	//クリア画面の描画
	DrawGraph(0, 0, clearHandle, true);
}
