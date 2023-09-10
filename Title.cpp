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
	//タイトル画面の画像のロード
	titleHandle = LoadGraph("Resources/title.png");

	//シーンの初期化
	scene = SceneManager::TITLE;

	//次のシーンの初期化
	nextScene = SceneManager::MANUAL;
}

void Title::Update(char* keys, char* oldkeys)
{
	//シーンの切り替え
	if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
	{
		scene = nextScene;
	}
}

void Title::Draw()
{
	//タイトル画面の描画
	DrawGraph(0, 0, titleHandle, true);
}
