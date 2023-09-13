#include "Space.h"

Space::Space() {
}

Space::~Space() {
	InitGraph();
}

void Space::Initialize() {
	spaceHandle = LoadGraph("Resources/SPACE.png");
}

void Space::Draw() {
	DrawGraph(840, 850, spaceHandle, true);
}
