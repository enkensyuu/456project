#pragma once
#include "Dxlib.h"

class GameScene
{
private:

	//高さ
	int height[8];
	//横
	int width[8];

	//選ぶ箱X
	int selectHeight[4];
	//選ぶ箱Y
	int selectWidth[4];
	//半径
	int radius = 0;

	//どこに当てはめるか
	int isSelectFlag[4];

	// 左ボタンが押されてるフラグ
	bool push_flag = false;

	//ボックスが指定されているか
	int isBoxFlag[4];

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
};

