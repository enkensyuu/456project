#pragma once
#include "Dxlib.h"

class GameScene
{
private:

	//高さ
	int height = 0;
	//横
	int weight = 0;
	//半径
	int radius = 0;

	// 左ボタンが押されてるフラグ
	bool push_flag = false;

	//マウスのX軸、Y軸
	int mouse_x, mouse_y;

	int Mouse;

public:
	void Initialize();

	void Update();

	void Draw();
};

