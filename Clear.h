#pragma once
#include "SceneManager.h"

class Clear
{
private:	//メンバ変数

	//クリアハンドル
	int clearHandle = 0;

	//現在のシーン
	SceneManager scene = SceneManager::CLEAR;

	//次のシーン
	SceneManager nextScene = SceneManager::TITLE;

public:		//メンバ関数

	//コンストラクタ
	Clear();

	//デストラクタ
	~Clear();

	//初期化
	void Intialize();

	//更新
	void Update(char* keys, char* oldkeys);

	//描画
	void Draw();

	//次のシーンのゲッター
	SceneManager GetNextScene() { return nextScene; }
};

