#pragma once
#include "Dxlib.h"

class GameScene
{
private:

	//³
	int height = 0;
	//¡
	int weight = 0;
	//¼a
	int radius = 0;

	// ¶{^ª³êÄétO
	bool push_flag = false;

	//}EXÌX²AY²
	int mouse_x, mouse_y;

	int Mouse;

public:
	void Initialize();

	void Update();

	void Draw();
};

