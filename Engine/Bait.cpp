#include "Bait.h"

Bait::Bait(Vec2 loc_ini)
{
	loc = loc_ini;
}

void Bait::Respawn(Vec2 loc_ini)
{
	loc = loc_ini;
}

void Bait::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim(int(loc.x), int(loc.y), side, side, c);
}

bool Bait::CollusionTest(Face face) const
{
	float box0_left = loc.x;
	float box0_right = loc.x + float(side);
	float box0_up = loc.y;
	float box0_down = loc.y + float(side);

	Vec2 face_loc = face.GetLocation();
	
	float box1_left = face_loc.x;
	float box1_right = face_loc.x + face.GetWidth();
	float box1_up = face_loc.y;
	float box1_down = face_loc.y + face.GetHeight();

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
