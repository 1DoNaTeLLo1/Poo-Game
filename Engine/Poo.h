#pragma once
#include "Graphics.h"
#include "Face.h"

class Poo
{
private:
	static constexpr int width = 23;
	static constexpr int height = 23;
	float x;
	float y;
	float vx;
	float vy;
	bool isEaten = false;
	bool isInit = false;

public:
	void Init(float in_x, float in_y, float in_vx, float in_vy);
	void Update();
	void BorderTest();
	void CollusionTest(Face& face);
	void Draw(Graphics& gfx) const;
	bool IsEaten() const;
};
