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
	clearHandle = LoadGraph("Resources/clear.png");

	//シーンの初期化
	scene = SceneManager::CLEAR;

	//次のシーンの初期化
	nextScene = SceneManager::TITLE;
}

void Clear::Update(char* keys, char* oldkeys)
{
	//シーンの切り替え
	if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
	{
		scene = nextScene;
	}
}

void Clear::Draw()
{
	//クリア画面の描画
	DrawGraph(0, 0, clearHandle, true);
}
