#include "Bait.h"

void Bait::Init(std::mt19937& rn, std::uniform_int_distribution<int>& xDist, std::uniform_int_distribution<int>& yDist)
{
	x = float(xDist(rn));
	y = float(yDist(rn));
}

void Bait::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim(int(x), int(y), side, side, c);
}

bool Bait::CollusionTest(Face face) const
{
	float box0_left = x;
	float box0_right = x + float(side);
	float box0_up = y;
	float box0_down = y + float(side);
	
	float box1_left = face.GetX();
	float box1_right = face.GetX() + float(face.GetWidth());
	float box1_up = face.GetY();
	float box1_down = face.GetY() + float(face.GetHeight());

	return	box0_left <= box1_right &&
		box0_right >= box1_left &&
		box0_up <= box1_down &&
		box0_down >= box1_up;
}

void Bait::Update()
{
	if (!isWhite)
	{
		if (c.GetG() < 100 && c.GetB() < 100)
		{
			c.SetG(c.GetG() + 2);
			c.SetB(c.GetB() + 2);
		}
		else
		{
			isWhite = true;
		}
	}
	else
	{
		if (c.GetG() > 0 && c.GetB() > 0)
		{
			c.SetG(c.GetG() - 2);
			c.SetB(c.GetB() - 2);
		}
		else
		{
			isWhite = false;
		}
	}
}
