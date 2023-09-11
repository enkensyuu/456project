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

	selectHeight[0] = 100;
	selectHeight[1] = 100;
	selectHeight[2] = 100;
	selectHeight[3] = 100;

	selectWidth[0] = 600;
	selectWidth[1] = 800;
	selectWidth[2] = 1000;
	selectWidth[3] = 1200;

	radius = 50;
	isSelectFlag[0] = 0;
	isSelectFlag[1] = 0;
	isSelectFlag[2] = 0;
	isSelectFlag[3] = 0;

	isBoxFlag[0] = 0;
	isBoxFlag[1] = 0;
	isBoxFlag[2] = 0;
	isBoxFlag[3] = 0;
}

void GameScene::Update() {
	// カーソル座標取得
	GetMousePoint(&mouse_x, &mouse_y);

	//マウスの入力
	Mouse = GetMouseInput();

	//マウスがボックスに重なった状態で左クリックするとボックスが移動する
	for (int i = 0; i < 4; i++) {
		if ((Mouse & MOUSE_INPUT_LEFT) &&
			(mouse_x < selectWidth[i] + radius &&
				mouse_x > selectWidth[i] - radius) &&
			(mouse_y < selectHeight[i] + radius &&
				mouse_y > selectHeight[i] - radius)) {
			isBoxFlag[i] = 1;
			if (isBoxFlag[i + 1] == 1 || isBoxFlag[i + 2] == 1 || isBoxFlag[i + 3] == 1 ||
				isBoxFlag[i - 1] == 1 || isBoxFlag[i - 2] == 1 || isBoxFlag[i - 3] == 1) {
				isBoxFlag[i + 1] = 0;
				isBoxFlag[i + 2] = 0;
				isBoxFlag[i + 3] = 0;
				isBoxFlag[i - 1] = 0;
				isBoxFlag[i - 2] = 0;
				isBoxFlag[i - 3] = 0;
			}
		}
		if ((Mouse & MOUSE_INPUT_LEFT)) {
#pragma region 選択1
			if (isBoxFlag[0] == 1) {
				if ((mouse_x < width[0] + radius &&
					mouse_x > width[0] - radius) &&
					(mouse_y < height[0] + radius &&
						mouse_y > height[0] - radius))
				{
					if (isSelectFlag[0] == 0) {

						height[0] = 100;
						width[0] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[0] = 800;
						width[0] = 600;
						isSelectFlag[0] = 0;
						isBoxFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[1] + radius &&
					mouse_x > width[1] - radius) &&
					(mouse_y < height[1] + radius &&
						mouse_y > height[1] - radius))
				{
					if (isSelectFlag[0] == 0) {

						height[1] = 100;
						width[1] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[1] = 800;
						width[1] = 800;
						isSelectFlag[0] = 0;
						isBoxFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[2] + radius &&
					mouse_x > width[2] - radius) &&
					(mouse_y < height[2] + radius &&
						mouse_y > height[2] - radius))
				{
					if (isSelectFlag[0] == 0) {

						height[2] = 100;
						width[2] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[2] = 800;
						width[2] = 1000;
						isSelectFlag[0] = 0;
						isBoxFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[3] + radius &&
					mouse_x > width[3] - radius) &&
					(mouse_y < height[3] + radius &&
						mouse_y > height[3] - radius))
				{
					if (isSelectFlag[0] == 0) {

						height[3] = 100;
						width[3] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[3] = 800;
						width[3] = 1200;
						isSelectFlag[0] = 0;
						isBoxFlag[0] = 0;
					}
				}
			}
#pragma endregion
#pragma region 選択2
			else if (isBoxFlag[1] == 1) {
				if ((mouse_x < width[0] + radius &&
					mouse_x > width[0] - radius) &&
					(mouse_y < height[0] + radius &&
						mouse_y > height[0] - radius))
				{
					if (isSelectFlag[1] == 0) {

						height[0] = 100;
						width[0] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[1] == 1) {

						height[0] = 800;
						width[0] = 600;
						isSelectFlag[1] = 0;
						isBoxFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[1] + radius &&
					mouse_x > width[1] - radius) &&
					(mouse_y < height[1] + radius &&
						mouse_y > height[1] - radius))
				{
					if (isSelectFlag[1] == 0) {

						height[1] = 100;
						width[1] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[1] == 1) {

						height[1] = 800;
						width[1] = 800;
						isSelectFlag[1] = 0;
						isBoxFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[2] + radius &&
					mouse_x > width[2] - radius) &&
					(mouse_y < height[2] + radius &&
						mouse_y > height[2] - radius))
				{
					if (isSelectFlag[1] == 0) {

						height[2] = 100;
						width[2] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[1] == 1) {

						height[2] = 800;
						width[2] = 1000;
						isSelectFlag[1] = 0;
						isBoxFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[3] + radius &&
					mouse_x > width[3] - radius) &&
					(mouse_y < height[3] + radius &&
						mouse_y > height[3] - radius))
				{
					if (isSelectFlag[1] == 0) {

						height[3] = 100;
						width[3] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[3] = 800;
						width[3] = 1200;
						isSelectFlag[1] = 0;
						isBoxFlag[1] = 0;
					}
				}
			}
#pragma endregion
#pragma region 選択3
			else if (isBoxFlag[2] == 1) {
				if ((mouse_x < width[0] + radius &&
					mouse_x > width[0] - radius) &&
					(mouse_y < height[0] + radius &&
						mouse_y > height[0] - radius))
				{
					if (isSelectFlag[2] == 0) {

						height[0] = 100;
						width[0] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[0] = 800;
						width[0] = 600;
						isSelectFlag[2] = 0;
						isBoxFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[1] + radius &&
					mouse_x > width[1] - radius) &&
					(mouse_y < height[1] + radius &&
						mouse_y > height[1] - radius))
				{
					if (isSelectFlag[2] == 0) {

						height[1] = 100;
						width[1] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[1] = 800;
						width[1] = 800;
						isSelectFlag[2] = 0;
						isBoxFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[2] + radius &&
					mouse_x > width[2] - radius) &&
					(mouse_y < height[2] + radius &&
						mouse_y > height[2] - radius))
				{
					if (isSelectFlag[2] == 0) {

						height[2] = 100;
						width[2] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[2] = 800;
						width[2] = 1000;
						isSelectFlag[2] = 0;
						isBoxFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[3] + radius &&
					mouse_x > width[3] - radius) &&
					(mouse_y < height[3] + radius &&
						mouse_y > height[3] - radius))
				{
					if (isSelectFlag[2] == 0) {

						height[3] = 100;
						width[3] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[3] = 800;
						width[3] = 1200;
						isSelectFlag[2] = 0;
						isBoxFlag[2] = 0;
					}
				}
			}
#pragma endregion
#pragma region 選択4
			else if (isBoxFlag[3] == 1) {
				if ((mouse_x < width[0] + radius &&
					mouse_x > width[0] - radius) &&
					(mouse_y < height[0] + radius &&
						mouse_y > height[0] - radius))
				{
					if (isSelectFlag[3] == 0) {

						height[0] = 100;
						width[0] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[0] = 800;
						width[0] = 600;
						isSelectFlag[3] = 0;
						isBoxFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[1] + radius &&
					mouse_x > width[1] - radius) &&
					(mouse_y < height[1] + radius &&
						mouse_y > height[1] - radius))
				{
					if (isSelectFlag[3] == 0) {

						height[1] = 100;
						width[1] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[1] = 800;
						width[1] = 800;
						isSelectFlag[3] = 0;
						isBoxFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[2] + radius &&
					mouse_x > width[2] - radius) &&
					(mouse_y < height[2] + radius &&
						mouse_y > height[2] - radius))
				{
					if (isSelectFlag[3] == 0) {

						height[2] = 100;
						width[2] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[2] = 800;
						width[2] = 1200;
						isSelectFlag[3] = 0;
						isBoxFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[3] + radius &&
					mouse_x > width[3] - radius) &&
					(mouse_y < height[3] + radius &&
						mouse_y > height[3] - radius))
				{
					if (isSelectFlag[3] == 0) {

						height[3] = 100;
						width[3] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[3] = 800;
						width[3] = 1200;
						isSelectFlag[3] = 0;
						isBoxFlag[3] = 0;
					}
				}
				}
#pragma endregion
		}
	}
}

void GameScene::Draw() {
	DrawBox(width[0] - radius, height[0] - radius, width[0] + radius, height[0] + radius, GetColor(0, 255, 255), true);
	DrawBox(width[1] - radius, height[1] - radius, width[1] + radius, height[1] + radius, GetColor(255, 0, 255), true);
	DrawBox(width[2] - radius, height[2] - radius, width[2] + radius, height[2] + radius, GetColor(255, 255, 0), true);
	DrawBox(width[3] - radius, height[3] - radius, width[3] + radius, height[3] + radius, GetColor(255, 255, 255), true);

	DrawBox(selectWidth[0] - radius, selectHeight[0] - radius, selectWidth[0] + radius, selectHeight[0] + radius, GetColor(0, 255, 255), false);
	DrawBox(selectWidth[1] - radius, selectHeight[1] - radius, selectWidth[1] + radius, selectHeight[1] + radius, GetColor(255, 0, 255), false);
	DrawBox(selectWidth[2] - radius, selectHeight[2] - radius, selectWidth[2] + radius, selectHeight[2] + radius, GetColor(255, 255, 0), false);
	DrawBox(selectWidth[3] - radius, selectHeight[3] - radius, selectWidth[3] + radius, selectHeight[3] + radius, GetColor(255, 255, 255), false);
	for (int i = 0; i < 4; i++) {
		if (isBoxFlag[i] == 1) {
			DrawBox(selectWidth[i] - radius, selectHeight[i] - radius, selectWidth[i] + radius, selectHeight[i] + radius, GetColor(255, 0, 0), false);
		}
	}

	//DrawFormatString(0, 0, GetColor(255, 255, 255), "isSelectFlag = %d", isSelectFlag);
	//DrawFormatString(0, 0, GetColor(255, 255, 255), "mouse_y = %d", mouse_y);
	DrawFormatString(0, 0, GetColor(255, 255, 255), "isBoxFlag[0] = %d", height[0]);
	DrawFormatString(0, 30, GetColor(255, 255, 255), "isBoxFlag[1] = %d", width[0]);
	DrawFormatString(0, 60, GetColor(255, 255, 255), "isBoxFlag[2] = %d", isBoxFlag[2]);
	DrawFormatString(0, 90, GetColor(255, 255, 255), "isBoxFlag[3] = %d", isBoxFlag[3]);
	DrawFormatString(0, 120, GetColor(255, 255, 255), "mouse_x = %d", mouse_x);
	DrawFormatString(0, 150, GetColor(255, 255, 255), "mouse_y = %d", mouse_y);
}
