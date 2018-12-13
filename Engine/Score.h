#pragma once
#include "Colors.h"
#include "Graphics.h"

class Score
{
private:
	int score = 0;
	const Color c = Colors::Blue;

	static constexpr int blockWidth = 10;
	static constexpr int blockHeight = 20;
	static constexpr int x = 20;
	static constexpr int y = 20;

public:
	void Draw(Graphics& gfx) const;
	void IncreaseScore();
};

