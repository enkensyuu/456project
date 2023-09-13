#include "GameScene.h"
#include "DxLib.h"

void GameScene::Initialize() {

	height[0] = 700;
	height[1] = 700;
	height[2] = 700;
	height[3] = 700;
	height[4] = 900;
	height[5] = 900;
	height[6] = 900;
	height[7] = 900;
	width[0] = 600;
	width[1] = 800;
	width[2] = 1000;
	width[3] = 1200;
	width[4] = 600;
	width[5] = 800;
	width[6] = 1000;
	width[7] = 1200;

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

	isClear1_ = false;
	isClear2_ = false;
	isClear3_ = false;
	isClear4_ = false;

	LoadDivGraph("Resources/No1.png", 8, 8, 1, 100, 100, image);

	nextScene = SceneManager::STAGE1;

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
						mouse_y > height[0] - radius)) {
					if (isSelectFlag[0] == 0) {

						height[0] = 100;
						width[0] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[0] = 700;
						width[0] = 600;
						isSelectFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[1] + radius &&
					mouse_x > width[1] - radius) &&
					(mouse_y < height[1] + radius &&
						mouse_y > height[1] - radius)) {
					if (isSelectFlag[0] == 0) {

						height[1] = 100;
						width[1] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[1] = 700;
						width[1] = 800;
						isSelectFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[2] + radius &&
					mouse_x > width[2] - radius) &&
					(mouse_y < height[2] + radius &&
						mouse_y > height[2] - radius)) {
					if (isSelectFlag[0] == 0) {

						height[2] = 100;
						width[2] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[2] = 700;
						width[2] = 1000;
						isSelectFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[3] + radius &&
					mouse_x > width[3] - radius) &&
					(mouse_y < height[3] + radius &&
						mouse_y > height[3] - radius)) {
					if (isSelectFlag[0] == 0) {

						height[3] = 100;
						width[3] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[3] = 700;
						width[3] = 1200;
						isSelectFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[4] + radius &&
					mouse_x > width[4] - radius) &&
					(mouse_y < height[4] + radius &&
						mouse_y > height[4] - radius)) {
					if (isSelectFlag[0] == 0) {

						height[4] = 100;
						width[4] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
						isClear1_ = true;
					}
					else if (isSelectFlag[0] == 1) {

						height[4] = 900;
						width[4] = 600;
						isSelectFlag[0] = 0;
						isClear1_ = false;
					}
				}
				else if ((mouse_x < width[5] + radius &&
					mouse_x > width[5] - radius) &&
					(mouse_y < height[5] + radius &&
						mouse_y > height[5] - radius)) {
					if (isSelectFlag[0] == 0) {

						height[5] = 100;
						width[5] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[5] = 900;
						width[5] = 800;
						isSelectFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[6] + radius &&
					mouse_x > width[6] - radius) &&
					(mouse_y < height[6] + radius &&
						mouse_y > height[6] - radius)) {
					if (isSelectFlag[0] == 0) {

						height[6] = 100;
						width[6] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[6] = 900;
						width[6] = 1000;
						isSelectFlag[0] = 0;
					}
				}
				else if ((mouse_x < width[7] + radius &&
					mouse_x > width[7] - radius) &&
					(mouse_y < height[7] + radius &&
						mouse_y > height[7] - radius)) {
					if (isSelectFlag[0] == 0) {

						height[7] = 100;
						width[7] = 600;
						isSelectFlag[0] = 1;
						isBoxFlag[0] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[7] = 900;
						width[7] = 1200;
						isSelectFlag[0] = 0;
					}
				}
			}
#pragma endregion
#pragma region 選択2
			else if (isBoxFlag[1] == 1) {
				if ((mouse_x < width[0] + radius &&
					mouse_x > width[0] - radius) &&
					(mouse_y < height[0] + radius &&
						mouse_y > height[0] - radius)) {
					if (isSelectFlag[1] == 0) {

						height[0] = 100;
						width[0] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[1] == 1) {

						height[0] = 700;
						width[0] = 600;
						isSelectFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[1] + radius &&
					mouse_x > width[1] - radius) &&
					(mouse_y < height[1] + radius &&
						mouse_y > height[1] - radius)) {
					if (isSelectFlag[1] == 0) {

						height[1] = 100;
						width[1] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[1] == 1) {

						height[1] = 700;
						width[1] = 800;
						isSelectFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[2] + radius &&
					mouse_x > width[2] - radius) &&
					(mouse_y < height[2] + radius &&
						mouse_y > height[2] - radius)) {
					if (isSelectFlag[1] == 0) {

						height[2] = 100;
						width[2] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
						isClear2_ = true;
					}
					else if (isSelectFlag[1] == 1) {

						height[2] = 700;
						width[2] = 1000;
						isSelectFlag[1] = 0;
						isClear2_ = false;
					}
				}
				else if ((mouse_x < width[3] + radius &&
					mouse_x > width[3] - radius) &&
					(mouse_y < height[3] + radius &&
						mouse_y > height[3] - radius)) {
					if (isSelectFlag[1] == 0) {

						height[3] = 100;
						width[3] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[1] == 1) {

						height[3] = 700;
						width[3] = 1200;
						isSelectFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[4] + radius &&
					mouse_x > width[4] - radius) &&
					(mouse_y < height[4] + radius &&
						mouse_y > height[4] - radius)) {
					if (isSelectFlag[1] == 0) {

						height[4] = 100;
						width[4] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[1] == 1) {

						height[4] = 900;
						width[4] = 600;
						isSelectFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[5] + radius &&
					mouse_x > width[5] - radius) &&
					(mouse_y < height[5] + radius &&
						mouse_y > height[5] - radius)) {
					if (isSelectFlag[1] == 0) {

						height[5] = 100;
						width[5] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[5] = 900;
						width[5] = 800;
						isSelectFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[6] + radius &&
					mouse_x > width[6] - radius) &&
					(mouse_y < height[6] + radius &&
						mouse_y > height[6] - radius)) {
					if (isSelectFlag[1] == 0) {

						height[6] = 100;
						width[6] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[6] = 900;
						width[6] = 1000;
						isSelectFlag[1] = 0;
					}
				}
				else if ((mouse_x < width[7] + radius &&
					mouse_x > width[7] - radius) &&
					(mouse_y < height[7] + radius &&
						mouse_y > height[7] - radius)) {
					if (isSelectFlag[1] == 0) {

						height[7] = 100;
						width[7] = 800;
						isSelectFlag[1] = 1;
						isBoxFlag[1] = 0;
					}
					else if (isSelectFlag[1] == 1) {

						height[7] = 900;
						width[7] = 1200;
						isSelectFlag[1] = 0;
					}
				}
			}
#pragma endregion
#pragma region 選択3
			else if (isBoxFlag[2] == 1) {
				if ((mouse_x < width[0] + radius &&
					mouse_x > width[0] - radius) &&
					(mouse_y < height[0] + radius &&
						mouse_y > height[0] - radius)) {
					if (isSelectFlag[2] == 0) {

						height[0] = 100;
						width[0] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[0] = 700;
						width[0] = 600;
						isSelectFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[1] + radius &&
					mouse_x > width[1] - radius) &&
					(mouse_y < height[1] + radius &&
						mouse_y > height[1] - radius)) {
					if (isSelectFlag[2] == 0) {

						height[1] = 100;
						width[1] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
						isClear3_ = true;
					}
					else if (isSelectFlag[2] == 1) {

						height[1] = 700;
						width[1] = 800;
						isSelectFlag[2] = 0;
						isClear3_ = false;
					}
				}
				else if ((mouse_x < width[2] + radius &&
					mouse_x > width[2] - radius) &&
					(mouse_y < height[2] + radius &&
						mouse_y > height[2] - radius)) {
					if (isSelectFlag[2] == 0) {

						height[2] = 100;
						width[2] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[2] = 700;
						width[2] = 1000;
						isSelectFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[3] + radius &&
					mouse_x > width[3] - radius) &&
					(mouse_y < height[3] + radius &&
						mouse_y > height[3] - radius)) {
					if (isSelectFlag[2] == 0) {

						height[3] = 100;
						width[3] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[3] = 700;
						width[3] = 1200;
						isSelectFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[4] + radius &&
					mouse_x > width[4] - radius) &&
					(mouse_y < height[4] + radius &&
						mouse_y > height[4] - radius)) {
					if (isSelectFlag[2] == 0) {

						height[4] = 100;
						width[4] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[4] = 900;
						width[4] = 600;
						isSelectFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[5] + radius &&
					mouse_x > width[5] - radius) &&
					(mouse_y < height[5] + radius &&
						mouse_y > height[5] - radius)) {
					if (isSelectFlag[2] == 0) {

						height[5] = 100;
						width[5] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[5] = 900;
						width[5] = 800;
						isSelectFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[6] + radius &&
					mouse_x > width[6] - radius) &&
					(mouse_y < height[6] + radius &&
						mouse_y > height[6] - radius)) {
					if (isSelectFlag[2] == 0) {

						height[6] = 100;
						width[6] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[2] == 1) {

						height[6] = 900;
						width[6] = 1000;
						isSelectFlag[2] = 0;
					}
				}
				else if ((mouse_x < width[7] + radius &&
					mouse_x > width[7] - radius) &&
					(mouse_y < height[7] + radius &&
						mouse_y > height[7] - radius)) {
					if (isSelectFlag[2] == 0) {

						height[7] = 100;
						width[7] = 1000;
						isSelectFlag[2] = 1;
						isBoxFlag[2] = 0;
					}
					else if (isSelectFlag[0] == 1) {

						height[7] = 900;
						width[7] = 1200;
						isSelectFlag[2] = 0;
					}
				}
			}
#pragma endregion
#pragma region 選択4
			else if (isBoxFlag[3] == 1) {
				if ((mouse_x < width[0] + radius &&
					mouse_x > width[0] - radius) &&
					(mouse_y < height[0] + radius &&
						mouse_y > height[0] - radius)) {
					if (isSelectFlag[3] == 0) {

						height[0] = 100;
						width[0] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[0] = 700;
						width[0] = 600;
						isSelectFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[1] + radius &&
					mouse_x > width[1] - radius) &&
					(mouse_y < height[1] + radius &&
						mouse_y > height[1] - radius)) {
					if (isSelectFlag[3] == 0) {

						height[1] = 100;
						width[1] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[1] = 700;
						width[1] = 800;
						isSelectFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[2] + radius &&
					mouse_x > width[2] - radius) &&
					(mouse_y < height[2] + radius &&
						mouse_y > height[2] - radius)) {
					if (isSelectFlag[3] == 0) {

						height[2] = 100;
						width[2] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[2] = 700;
						width[2] = 1000;
						isSelectFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[3] + radius &&
					mouse_x > width[3] - radius) &&
					(mouse_y < height[3] + radius &&
						mouse_y > height[3] - radius)) {
					if (isSelectFlag[3] == 0) {

						height[3] = 100;
						width[3] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[3] = 700;
						width[3] = 1200;
						isSelectFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[4] + radius &&
					mouse_x > width[4] - radius) &&
					(mouse_y < height[4] + radius &&
						mouse_y > height[4] - radius)) {
					if (isSelectFlag[3] == 0) {

						height[4] = 100;
						width[4] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[4] = 900;
						width[4] = 600;
						isSelectFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[5] + radius &&
					mouse_x > width[5] - radius) &&
					(mouse_y < height[5] + radius &&
						mouse_y > height[5] - radius)) {
					if (isSelectFlag[3] == 0) {

						height[5] = 100;
						width[5] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
						isClear4_ = true;
					}
					else if (isSelectFlag[3] == 1) {

						height[5] = 900;
						width[5] = 800;
						isSelectFlag[3] = 0;
						isClear4_ = false;
					}
				}
				else if ((mouse_x < width[6] + radius &&
					mouse_x > width[6] - radius) &&
					(mouse_y < height[6] + radius &&
						mouse_y > height[6] - radius)) {
					if (isSelectFlag[3] == 0) {

						height[6] = 100;
						width[6] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[6] = 900;
						width[6] = 1000;
						isSelectFlag[3] = 0;
					}
				}
				else if ((mouse_x < width[7] + radius &&
					mouse_x > width[7] - radius) &&
					(mouse_y < height[7] + radius &&
						mouse_y > height[7] - radius)) {
					if (isSelectFlag[3] == 0) {

						height[7] = 100;
						width[7] = 1200;
						isSelectFlag[3] = 1;
						isBoxFlag[3] = 0;
					}
					else if (isSelectFlag[3] == 1) {

						height[7] = 900;
						width[7] = 1200;
						isSelectFlag[3] = 0;
					}
				}
			}
#pragma endregion
		}
	}
	if (isClear1_ && isClear2_ && isClear3_ && isClear4_)
	{
		nextScene = SceneManager::STAGE2;
	}
}

void GameScene::Draw() {

	DrawGraph(width[0] - radius, height[0] - radius, image[7], true);
	DrawGraph(width[1] - radius, height[1] - radius, image[2], true);
	DrawGraph(width[2] - radius, height[2] - radius, image[1], true);
	DrawGraph(width[3] - radius, height[3] - radius, image[4], true);
	DrawGraph(width[4] - radius, height[4] - radius, image[0], true);
	DrawGraph(width[5] - radius, height[5] - radius, image[3], true);
	DrawGraph(width[6] - radius, height[6] - radius, image[5], true);
	DrawGraph(width[7] - radius, height[7] - radius, image[6], true);


	DrawBox(selectWidth[0] - radius, selectHeight[0] - radius, selectWidth[0] + radius, selectHeight[0] + radius, GetColor(0, 255, 255), false);
	DrawBox(selectWidth[1] - radius, selectHeight[1] - radius, selectWidth[1] + radius, selectHeight[1] + radius, GetColor(255, 0, 255), false);
	DrawBox(selectWidth[2] - radius, selectHeight[2] - radius, selectWidth[2] + radius, selectHeight[2] + radius, GetColor(255, 255, 0), false);
	DrawBox(selectWidth[3] - radius, selectHeight[3] - radius, selectWidth[3] + radius, selectHeight[3] + radius, GetColor(255, 255, 255), false);

	for (int i = 0; i < 4; i++) {
		if (isBoxFlag[i] == 1) {
			DrawBox(selectWidth[i] - radius, selectHeight[i] - radius, selectWidth[i] + radius, selectHeight[i] + radius, GetColor(255, 0, 0), false);
		}
	}
}
