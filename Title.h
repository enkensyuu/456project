#pragma once
#include "SceneManager.h"

class Title
{
private:	//メンバ変数

	//タイトルハンドル
	int titleHandle = 0;

	//現在のシーン
	SceneManager scene = SceneManager::TITLE;

	//次のシーン
	SceneManager nextScene = SceneManager::MANUAL;

public:		//メンバ関数

	//コンストラクタ
	Title();

	//デストラクタ
	~Title();

	//初期化
	void Intialize();

	//更新
	void Update(char* keys, char* oldkeys);

	//描画
	void Draw();

	//次のシーンのゲッター
	SceneManager GetNextScene() { return nextScene; }
};

