#include "GameScene.h"
#include "DxLib.h"

void GameScene::Initialize() {
	height = 800;
	weight = 400;
	radius = 25;
}

void GameScene::Update() {
	// カーソル座標取得
	GetMousePoint(&mouse_x, &mouse_y);

	//マウスの入力
	Mouse = GetMouseInput();

	//マウスがボックスに重なった状態で左クリックするとボックスが移動する
	if ((Mouse & MOUSE_INPUT_LEFT) && (mouse_x < weight + radius && mouse_x > weight - radius) && (mouse_y < height + radius && mouse_y > height - radius)) {
		if (push_flag == false) {
			push_flag = true;
			height = 100;
			weight = 300;
		}
		else if (push_flag == true) {
			push_flag = false;
			height = 800;
			weight = 400;
		}
	}
}

void GameScene::Draw() {
	DrawBox(weight - radius, height - radius, weight + radius, height + radius, GetColor(255, 255, 255), true);
	/*DrawBox(weight - radius, height - radius, weight + radius, height + radius, GetColor(255, 255, 255), true);
	DrawBox(weight - radius, height - radius, weight + radius, height + radius, GetColor(255, 255, 255), true);
	DrawBox(weight - radius, height - radius, weight + radius, height + radius, GetColor(255, 255, 255), true);*/
	//DrawFormatString(100, 100, GetColor(255, 255, 255), "push_flag = %d", push_flag, 10);
}
