#include "Score.h"

void Score::Draw(Graphics& gfx) const
{
	int width = score * blockWidth;

	gfx.DrawRectDim(x, y, width, blockHeight, c);
}

void Score::IncreaseScore()
{
	score++;
}
