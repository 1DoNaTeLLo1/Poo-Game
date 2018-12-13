#pragma once
#include "Graphics.h"
#include "Face.h"

class Poo
{
private:
	static constexpr int width = 23;
	static constexpr int height = 23;
	int x;
	int y;
	int vx;
	int vy;
	bool isEaten = false;
	bool isInit = false;

public:
	void Init(int in_x, int in_y, int in_vx, int in_vy);
	void Update();
	void BorderTest();
	void CollusionTest(Face& face);
	void Draw(Graphics& gfx) const;
	bool IsEaten() const;
};
