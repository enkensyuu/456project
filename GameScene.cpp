#include "GameScene.h"
#include "DxLib.h"

void GameScene::Initialize() {

	height[0] = 700;
	height[1] = 700;
	height[2] = 700;
	height[3] = 700;
	height[4] = 800;
	height[5] = 800;
	height[6] = 800;
	height[7] = 800;

	width[0] = 700;
	width[1] = 900;
	width[2] = 1100;
	width[3] = 1300;
	width[4] = 700;
	width[5] = 900;
	width[6] = 1100;
	width[7] = 1300;

	radius = 25;
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
	for (int i = 0; i < 8; i++) {
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
			}
			else {
				if (height[0] != 700 && width[0] != 700) {
					height[0] = 700;
					width[0] = 700;
				}
				else if (height[1] != 700 && width[1] != 900) {
					height[1] = 700;
					width[1] = 900;
				}
				else if (height[2] != 700 && width[2] != 1100) {
					height[2] = 700;
					width[2] = 1100;
				}
				else if (height[3] != 700 && width[3] != 1300) {
					height[3] = 700;
					width[3] = 1300;
				}
				else if (height[4] == 100 && width[4] <= 1200) {
					height[4] = 800;
					width[4] = 700;
				}
				else if (height[5] == 100 && width[5] <= 1200) {
					height[5] = 800;
					width[5] = 900;
				}
				else if (height[6] == 100 && width[6] <= 1200) {
					height[6] = 800;
					width[6] = 1100;
				}
				else if (height[7] == 100 && width[7] <= 1200) {
					height[7] = 800;
					width[7] = 1300;
				}
				isSelectFlag[0] = 0;
				isSelectFlag[1] = 0;
				isSelectFlag[2] = 0;
				isSelectFlag[3] = 0;
				push_flag = false;
				/*if (isSelectFlag[0] == 1) {
					height[i] = 800;
					width[i] = 600;
					isSelectFlag[0] = 0;
				}
				else if (isSelectFlag[0] == 0 && isSelectFlag[1] == 1) {
					height[i] = 800;
					width[i] = 800;
					isSelectFlag[1] = 0;
				}
				else if (isSelectFlag[0] == 0 && isSelectFlag[1] == 0 && isSelectFlag[2] == 1) {
					height[i] = 800;
					width[i] = 1000;
					isSelectFlag[2] = 0;
				}
				else if (isSelectFlag[0] == 0 && isSelectFlag[1] == 0 && isSelectFlag[2] == 0 && isSelectFlag[3] == 1) {
					height[i] = 800;
					width[i] = 1200;
					isSelectFlag[3] = 0;
				}*/
				/*height[0] = 800;
				height[1] = 800;
				height[2] = 800;
				height[3] = 800;
				width[0] = 600;
				width[1] = 800;
				width[2] = 1000;
				width[3] = 1200;*/
				

			}
		}
	}
}

void GameScene::Draw() {
	DrawBox(width[0] - radius, height[0] - radius, width[0] + radius, height[0] + radius, GetColor(0, 255, 255), true);
	DrawBox(width[1] - radius, height[1] - radius, width[1] + radius, height[1] + radius, GetColor(255, 0, 255), true);
	DrawBox(width[2] - radius, height[2] - radius, width[2] + radius, height[2] + radius, GetColor(255, 255, 0), true);
	DrawBox(width[3] - radius, height[3] - radius, width[3] + radius, height[3] + radius, GetColor(255, 0, 0), true);
	DrawBox(width[4] - radius, height[4] - radius, width[4] + radius, height[4] + radius, GetColor(0, 255, 0), true);
	DrawBox(width[5] - radius, height[5] - radius, width[5] + radius, height[5] + radius, GetColor(0, 0, 255), true);
	DrawBox(width[6] - radius, height[6] - radius, width[6] + radius, height[6] + radius, GetColor(155, 155, 155), true);
	DrawBox(width[7] - radius, height[7] - radius, width[7] + radius, height[7] + radius, GetColor(55, 55, 55), true);
	//DrawFormatString(0, 0, GetColor(255, 255, 255), "isSelectFlag = %d", isSelectFlag);
	//DrawFormatString(0, 0, GetColor(255, 255, 255), "mouse_y = %d", mouse_y);
}
