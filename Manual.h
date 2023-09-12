#pragma once
#include "SceneManager.h"

class Manual
{
private:	//メンバ変数

	//マニュアルハンドル
	int manualHandle = 0;

	//次のシーン
	SceneManager nextScene = SceneManager::STAGE1;

public:		//メンバ関数

	//コンストラクタ
	Manual();

	//デストラクタ
	~Manual();

	//初期化
	void Intialize();

	//更新
	void Update(char* keys, char* oldkeys);

	//描画
	void Draw();

	//次のシーンのゲッター
	SceneManager GetNextScene() { return nextScene; }
};

