#pragma once
#include "Dxlib.h"
class Space {
private:
	int spaceHandle = 0;

public:
	Space();

	~Space();

	void Initialize();

	void Draw();
};

