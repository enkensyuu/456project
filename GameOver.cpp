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
	//ゲームオーバー画面の画像のロード
	gameOverHandle = LoadGraph("Resources/gameover.png");

	//シーンの初期化
	scene = SceneManager::GAMEOVER;

	//次のシーンの初期化
	nextScene = SceneManager::TITLE;
}

void GameOver::Update(char* keys, char* oldkeys)
{
	//シーンの切り替え
	if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
	{
		scene = nextScene;
	}
}

void GameOver::Draw()
{
	//ゲームオーバー画面の描画
	DrawGraph(0, 0, gameOverHandle, true);
}
