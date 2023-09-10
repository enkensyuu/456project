#pragma once
#include "Dxlib.h"

class GameScene
{
private:

	//高さ
	int height[8];
	//横
	int width[8];
	//半径
	int radius = 0;
	//ずらす

	//どこに当てはめるか
	int isSelectFlag[4];

	// 左ボタンが押されてるフラグ
	bool push_flag = false;

	//マウスのX軸、Y軸
	int mouse_x, mouse_y;

	//マウスの取得
	int Mouse;

public:

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

	/// <summary>
	/// マウスとボックスの当たり判定
	/// </summary>
	void Mouse_Collision();
};

