#pragma once
#include "SceneManager.h"

class GameOver
{
private:	//メンバ変数

	//ゲームオーバーハンドル
	int gameOverHandle = 0;

	//現在のシーン
	SceneManager scene = SceneManager::GAMEOVER;

	//次のシーン
	SceneManager nextScene = SceneManager::TITLE;

public:		//メンバ関数

	//コンストラクタ
	GameOver();

	//デストラクタ
	~GameOver();

	//初期化
	void Intialize();

	//更新
	void Update(char* keys, char* oldkeys);

	//描画
	void Draw();
};

