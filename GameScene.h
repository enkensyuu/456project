#pragma once
#include "Dxlib.h"

class GameScene
{
private:

	//高さ
	int height[4];
	//横
	int width[4];
	//半径
	int radius = 0;
	//ずらす
	int boxShift = 0;

	//どこに当てはめるか
	int isSelectFlag[4];

	// 左ボタンが押されてるフラグ
	bool push_flag = false;

	//マウスのX軸、Y軸
	int mouse_x, mouse_y;

	//マウスの取得
	int Mouse;

public:
	void Initialize();

	void Update();

	void Draw();
};

