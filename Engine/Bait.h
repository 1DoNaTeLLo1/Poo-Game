#pragma once
#include <random>
#include "Graphics.h"
#include "Face.h"
#include "Colors.h"

class Bait
{
private:
	std::random_device rd;
	std::mt19937 rn;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;


	int x;
	int y;
	Color c = Colors::Red;
	bool isWhite = false;
	bool isRed = true;

	static constexpr int side = 20;

public:
	Bait();
	void Init();
	void Draw(Graphics& gfx) const;
	bool CollusionTest(Face face) const;
	void Update();
};

