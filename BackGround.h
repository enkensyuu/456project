#pragma once
#include "Dxlib.h"
class BackGround {
private:
	int backGroundHandle = 0;

public:
	BackGround();

	~BackGround();

	void Initialize();

	void Draw();
};

