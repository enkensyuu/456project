#include "GameScene.h"
#include "DxLib.h"

void GameScene::Initialize() {

	height[0] = 800;
	height[1] = 800;
	height[2] = 800;
	height[3] = 800;
	width[0] = 600;
	width[1] = 800;
	width[2] = 1000;
	width[3] = 1200;

	radius = 50;
	isSelectFlag[0] = 0;
	isSelectFlag[1] = 0;
	isSelectFlag[2] = 0;
	isSelectFlag[3] = 0;
}

void GameScene::Update() {
	// カーソル座標取得
	GetMousePoint(&mouse_x, &mouse_y);

	//マウスの入力
	Mouse = GetMouseInput();

	//マウスがボックスに重なった状態で左クリックするとボックスが移動する
	for (int i = 0; i < 4; i++) {
		if ((Mouse & MOUSE_INPUT_LEFT) &&
			(mouse_x < width[i] + radius &&
			 mouse_x > width[i] - radius) &&
			(mouse_y < height[i] + radius &&
			 mouse_y > height[i] - radius)) {
			if (push_flag == false) {
				push_flag = true;
				if (isSelectFlag[0] == 0 && mouse_y >= 490) {
					height[i] = 100;
					width[i] = 600;
					isSelectFlag[0] = 1;
					push_flag = false;
				}
				else if (isSelectFlag[0] == 1 && isSelectFlag[1] == 0 && mouse_y >= 490) {
					height[i] = 100;
					width[i] = 800;
					isSelectFlag[1] = 1;
					push_flag = false;
				}
				else if (isSelectFlag[0] == 1 && isSelectFlag[1] == 1 && isSelectFlag[2] == 0 && mouse_y >= 490) {
					height[i] = 100;
					width[i] = 1000;
					isSelectFlag[2] = 1;
					push_flag = false;
				}
				else if (isSelectFlag[0] == 1 && isSelectFlag[1] == 1 && isSelectFlag[2] == 1 && isSelectFlag[3] == 0 && mouse_y >= 490) {
					height[i] = 100;
					width[i] = 1200;
					isSelectFlag[3] = 1;
					push_flag = false;
				}
				else if (isSelectFlag[0] == 1 && isSelectFlag[1] == 1 && isSelectFlag[2] == 1 && isSelectFlag[3] == 1) {
					isSelectFlag[0] = 0;
					isSelectFlag[1] = 0;
					isSelectFlag[2] = 0;
					isSelectFlag[3] = 0;
				}
			}
			else if (push_flag == true) {
				push_flag = false;
				height[0] = 800;
				height[1] = 800;
				height[2] = 800;
				height[3] = 800;
				width[0] = 600;
				width[1] = 800;
				width[2] = 1000;
				width[3] = 1200;
				isSelectFlag[0] = 0;
				isSelectFlag[1] = 0;
				isSelectFlag[2] = 0;
				isSelectFlag[3] = 0;

			}
		}
	}
}

void GameScene::Draw() {
	DrawBox(width[0] - radius, height[0] - radius, width[0] + radius, height[0] + radius, GetColor(0, 255, 255), true);
	DrawBox(width[1] - radius, height[1] - radius, width[1] + radius, height[1] + radius, GetColor(255, 0, 255), true);
	DrawBox(width[2] - radius, height[2] - radius, width[2] + radius, height[2] + radius, GetColor(255, 255, 0), true);
	DrawBox(width[3] - radius, height[3] - radius, width[3] + radius, height[3] + radius, GetColor(255, 255, 255), true);
	//DrawFormatString(0, 0, GetColor(255, 255, 255), "isSelectFlag = %d", isSelectFlag);
	DrawFormatString(0, 0, GetColor(255, 255, 255), "mouse_y = %d", mouse_y);
}
