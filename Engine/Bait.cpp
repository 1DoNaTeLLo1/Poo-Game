#include "Bait.h"

Bait::Bait() :
	rn(rd()),
	xDist(0, 770),
	yDist(0, 570)
{ }

void Bait::Init()
{
	x = xDist(rn);
	y = yDist(rn);
}

void Bait::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim(x, y, side, side, c);
}

bool Bait::CollusionTest(Face face) const
{
	int box0_left = x;
	int box0_right = x + side;
	int box0_up = y;
	int box0_down = y + side;

	int box1_left = face.GetX();
	int box1_right = face.GetX() + face.GetWidth();
	int box1_up = face.GetY();
	int box1_down = face.GetY() + face.GetHeight();

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
