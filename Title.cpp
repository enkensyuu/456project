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
}

void Title::Update(char* keys, char* oldkeys)
{
	
}

void Title::Draw()
{
	//タイトル画面の描画
	DrawGraph(0, 0, titleHandle, true);
}
