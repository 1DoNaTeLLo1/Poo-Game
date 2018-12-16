#pragma once
#include <random>
#include "Graphics.h"
#include "Face.h"
#include "Colors.h"
#include "Vec2.h"

class Bait
{
private:
	Vec2 loc;
	Color c = Colors::Red;
	bool isWhite = false;
	bool isRed = true;

	static constexpr int side = 20;

public:
	Bait(Vec2 loc_ini);
	void Respawn(Vec2 loc_ini);
	void Draw(Graphics& gfx) const;
	bool CollusionTest(Face face) const;
	void Update();
};

