#include "backGround.h"

BackGround::BackGround() {
}

BackGround::~BackGround() {
	InitGraph();
}

void BackGround::Initialize() {
	backGroundHandle = LoadGraph("Resources/backGround.png");
}

void BackGround::Draw() {
	DrawGraph(0, 0, backGroundHandle, true);
}
