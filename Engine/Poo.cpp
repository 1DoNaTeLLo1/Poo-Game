#include "Poo.h"

void Poo::Init(Vec2 loc_ini, Vec2 vel_ini)
{
	if (!isInit)
	{
		loc = loc_ini;
		vel = vel_ini;
	}
}

void Poo::Update(float dt)
{
	loc += vel * dt;

	const Vec2 old_loc = loc;

	BorderTest();

	if (loc.x != old_loc.x)
	{
		vel.x = -vel.x;
	}
	if (loc.y != old_loc.y)
	{
		vel.y = -vel.y;
	}
}

void Poo::BorderTest()
{
	if (loc.x < 0)
	{
		loc.x = 0;
	}
	else if (loc.x + width >= Graphics::ScreenWidth)
	{
		loc.x = Graphics::ScreenWidth - 1 - width;
	}

	if (loc.y < 0)
	{
		loc.y = 0;
	}
	else if (loc.y + height >= Graphics::ScreenHeight)
	{
		loc.y = Graphics::ScreenHeight - 1 - height;
	}
}

void Poo::CollusionTest(Face& face)
{
	float box0_left = loc.x;
	float box0_right = loc.x + float(width);
	float box0_up = loc.y;
	float box0_down = loc.y + float(height);

	Vec2 face_loc = face.GetLocation();

	float box1_left = face_loc.x;
	float box1_right = face_loc.x + face.GetWidth();
	float box1_up = face_loc.y;
	float box1_down = face_loc.y + face.GetHeight();

	if (box0_left <= box1_right &&
		box0_right >= box1_left &&
		box0_up <= box1_down &&
		box0_down >= box1_up)
	{
		isEaten = true;
	}
}

void Poo::Draw(Graphics& gfx) const
{
	int x_int = int(loc.x);
	int y_int = int(loc.y);

	gfx.PutPixel(14 + x_int, 0 + y_int, 138, 77, 0);
	gfx.PutPixel(7 + x_int, 1 + y_int, 138, 77, 0);
	gfx.PutPixel(13 + x_int, 1 + y_int, 138, 77, 0);
	gfx.PutPixel(20 + x_int, 1 + y_int, 138, 77, 0);
	gfx.PutPixel(6 + x_int, 2 + y_int, 138, 77, 0);
	gfx.PutPixel(13 + x_int, 2 + y_int, 138, 77, 0);
	gfx.PutPixel(20 + x_int, 2 + y_int, 138, 77, 0);
	gfx.PutPixel(6 + x_int, 3 + y_int, 138, 77, 0);
	gfx.PutPixel(6 + x_int, 4 + y_int, 138, 77, 0);
	gfx.PutPixel(14 + x_int, 4 + y_int, 138, 77, 0);
	gfx.PutPixel(21 + x_int, 4 + y_int, 138, 77, 0);
	gfx.PutPixel(7 + x_int, 5 + y_int, 138, 77, 0);
	gfx.PutPixel(13 + x_int, 5 + y_int, 138, 77, 0);
	gfx.PutPixel(21 + x_int, 5 + y_int, 138, 77, 0);
	gfx.PutPixel(7 + x_int, 6 + y_int, 138, 77, 0);
	gfx.PutPixel(20 + x_int, 6 + y_int, 138, 77, 0);
	gfx.PutPixel(6 + x_int, 7 + y_int, 138, 77, 0);
	gfx.PutPixel(14 + x_int, 7 + y_int, 51, 28, 0);
	gfx.PutPixel(15 + x_int, 7 + y_int, 51, 28, 0);
	gfx.PutPixel(20 + x_int, 7 + y_int, 138, 77, 0);
	gfx.PutPixel(12 + x_int, 8 + y_int, 51, 28, 0);
	gfx.PutPixel(13 + x_int, 8 + y_int, 51, 28, 0);
	gfx.PutPixel(14 + x_int, 8 + y_int, 51, 28, 0);
	gfx.PutPixel(7 + x_int, 9 + y_int, 138, 77, 0);
	gfx.PutPixel(11 + x_int, 9 + y_int, 51, 28, 0);
	gfx.PutPixel(12 + x_int, 9 + y_int, 102, 57, 0);
	gfx.PutPixel(13 + x_int, 9 + y_int, 138, 77, 0);
	gfx.PutPixel(14 + x_int, 9 + y_int, 138, 77, 0);
	gfx.PutPixel(15 + x_int, 9 + y_int, 51, 28, 0);
	gfx.PutPixel(21 + x_int, 9 + y_int, 138, 77, 0);
	gfx.PutPixel(10 + x_int, 10 + y_int, 51, 28, 0);
	gfx.PutPixel(11 + x_int, 10 + y_int, 51, 28, 0);
	gfx.PutPixel(12 + x_int, 10 + y_int, 102, 57, 0);
	gfx.PutPixel(13 + x_int, 10 + y_int, 138, 77, 0);
	gfx.PutPixel(14 + x_int, 10 + y_int, 138, 77, 0);
	gfx.PutPixel(15 + x_int, 10 + y_int, 51, 28, 0);
	gfx.PutPixel(20 + x_int, 10 + y_int, 138, 77, 0);
	gfx.PutPixel(9 + x_int, 11 + y_int, 51, 28, 0);
	gfx.PutPixel(10 + x_int, 11 + y_int, 138, 77, 0);
	gfx.PutPixel(11 + x_int, 11 + y_int, 138, 77, 0);
	gfx.PutPixel(12 + x_int, 11 + y_int, 51, 28, 0);
	gfx.PutPixel(13 + x_int, 11 + y_int, 51, 28, 0);
	gfx.PutPixel(14 + x_int, 11 + y_int, 51, 28, 0);
	gfx.PutPixel(15 + x_int, 11 + y_int, 51, 28, 0);
	gfx.PutPixel(16 + x_int, 11 + y_int, 51, 28, 0);
	gfx.PutPixel(9 + x_int, 12 + y_int, 51, 28, 0);
	gfx.PutPixel(10 + x_int, 12 + y_int, 138, 77, 0);
	gfx.PutPixel(11 + x_int, 12 + y_int, 138, 77, 0);
	gfx.PutPixel(12 + x_int, 12 + y_int, 111, 62, 0);
	gfx.PutPixel(13 + x_int, 12 + y_int, 102, 57, 0);
	gfx.PutPixel(14 + x_int, 12 + y_int, 102, 57, 0);
	gfx.PutPixel(15 + x_int, 12 + y_int, 102, 57, 0);
	gfx.PutPixel(16 + x_int, 12 + y_int, 51, 28, 0);
	gfx.PutPixel(9 + x_int, 13 + y_int, 51, 28, 0);
	gfx.PutPixel(10 + x_int, 13 + y_int, 109, 61, 0);
	gfx.PutPixel(11 + x_int, 13 + y_int, 138, 77, 0);
	gfx.PutPixel(12 + x_int, 13 + y_int, 138, 77, 0);
	gfx.PutPixel(13 + x_int, 13 + y_int, 138, 77, 0);
	gfx.PutPixel(14 + x_int, 13 + y_int, 138, 77, 0);
	gfx.PutPixel(15 + x_int, 13 + y_int, 138, 77, 0);
	gfx.PutPixel(16 + x_int, 13 + y_int, 51, 28, 0);
	gfx.PutPixel(5 + x_int, 14 + y_int, 51, 28, 0);
	gfx.PutPixel(7 + x_int, 14 + y_int, 51, 28, 0);
	gfx.PutPixel(8 + x_int, 14 + y_int, 51, 28, 0);
	gfx.PutPixel(9 + x_int, 14 + y_int, 51, 28, 0);
	gfx.PutPixel(10 + x_int, 14 + y_int, 51, 28, 0);
	gfx.PutPixel(11 + x_int, 14 + y_int, 138, 77, 0);
	gfx.PutPixel(12 + x_int, 14 + y_int, 138, 77, 0);
	gfx.PutPixel(13 + x_int, 14 + y_int, 138, 77, 0);
	gfx.PutPixel(14 + x_int, 14 + y_int, 138, 77, 0);
	gfx.PutPixel(15 + x_int, 14 + y_int, 138, 77, 0);
	gfx.PutPixel(16 + x_int, 14 + y_int, 51, 28, 0);
	gfx.PutPixel(4 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(5 + x_int, 15 + y_int, 138, 77, 0);
	gfx.PutPixel(6 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(7 + x_int, 15 + y_int, 116, 65, 0);
	gfx.PutPixel(8 + x_int, 15 + y_int, 138, 77, 0);
	gfx.PutPixel(9 + x_int, 15 + y_int, 138, 77, 0);
	gfx.PutPixel(10 + x_int, 15 + y_int, 138, 77, 0);
	gfx.PutPixel(11 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(12 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(13 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(14 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(15 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(16 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(17 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(18 + x_int, 15 + y_int, 51, 28, 0);
	gfx.PutPixel(1 + x_int, 16 + y_int, 51, 28, 0);
	gfx.PutPixel(2 + x_int, 16 + y_int, 51, 28, 0);
	gfx.PutPixel(3 + x_int, 16 + y_int, 51, 28, 0);
	gfx.PutPixel(4 + x_int, 16 + y_int, 51, 28, 0);
	gfx.PutPixel(5 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(6 + x_int, 16 + y_int, 51, 28, 0);
	gfx.PutPixel(7 + x_int, 16 + y_int, 116, 65, 0);
	gfx.PutPixel(8 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(9 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(10 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(11 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(12 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(13 + x_int, 16 + y_int, 109, 61, 0);
	gfx.PutPixel(14 + x_int, 16 + y_int, 51, 28, 0);
	gfx.PutPixel(15 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(16 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(17 + x_int, 16 + y_int, 138, 77, 0);
	gfx.PutPixel(18 + x_int, 16 + y_int, 123, 69, 0);
	gfx.PutPixel(19 + x_int, 16 + y_int, 51, 28, 0);
	gfx.PutPixel(0 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(1 + x_int, 17 + y_int, 87, 49, 0);
	gfx.PutPixel(2 + x_int, 17 + y_int, 87, 49, 0);
	gfx.PutPixel(3 + x_int, 17 + y_int, 87, 49, 0);
	gfx.PutPixel(4 + x_int, 17 + y_int, 87, 49, 0);
	gfx.PutPixel(5 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(6 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(7 + x_int, 17 + y_int, 43, 24, 0);
	gfx.PutPixel(8 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(9 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(10 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(11 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(12 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(13 + x_int, 17 + y_int, 40, 22, 0);
	gfx.PutPixel(14 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(15 + x_int, 17 + y_int, 138, 77, 0);
	gfx.PutPixel(16 + x_int, 17 + y_int, 138, 77, 0);
	gfx.PutPixel(17 + x_int, 17 + y_int, 138, 77, 0);
	gfx.PutPixel(18 + x_int, 17 + y_int, 123, 69, 0);
	gfx.PutPixel(19 + x_int, 17 + y_int, 51, 28, 0);
	gfx.PutPixel(0 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(1 + x_int, 18 + y_int, 138, 77, 0);
	gfx.PutPixel(2 + x_int, 18 + y_int, 138, 77, 0);
	gfx.PutPixel(3 + x_int, 18 + y_int, 138, 77, 0);
	gfx.PutPixel(4 + x_int, 18 + y_int, 138, 77, 0);
	gfx.PutPixel(5 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(6 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(7 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(8 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(9 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(10 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(11 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(12 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(13 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(14 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(15 + x_int, 18 + y_int, 138, 77, 0);
	gfx.PutPixel(16 + x_int, 18 + y_int, 138, 77, 0);
	gfx.PutPixel(17 + x_int, 18 + y_int, 138, 77, 0);
	gfx.PutPixel(18 + x_int, 18 + y_int, 123, 69, 0);
	gfx.PutPixel(19 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(20 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(21 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(22 + x_int, 18 + y_int, 51, 28, 0);
	gfx.PutPixel(0 + x_int, 19 + y_int, 51, 28, 0);
	gfx.PutPixel(1 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(2 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(3 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(4 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(5 + x_int, 19 + y_int, 51, 28, 0);
	gfx.PutPixel(6 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(7 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(8 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(9 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(10 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(11 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(12 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(13 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(14 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(15 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(16 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(17 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(18 + x_int, 19 + y_int, 123, 69, 0);
	gfx.PutPixel(19 + x_int, 19 + y_int, 51, 28, 0);
	gfx.PutPixel(20 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(21 + x_int, 19 + y_int, 138, 77, 0);
	gfx.PutPixel(22 + x_int, 19 + y_int, 65, 36, 0);
	gfx.PutPixel(23 + x_int, 19 + y_int, 51, 28, 0);
	gfx.PutPixel(1 + x_int, 20 + y_int, 51, 28, 0);
	gfx.PutPixel(2 + x_int, 20 + y_int, 51, 28, 0);
	gfx.PutPixel(3 + x_int, 20 + y_int, 51, 28, 0);
	gfx.PutPixel(4 + x_int, 20 + y_int, 51, 28, 0);
	gfx.PutPixel(5 + x_int, 20 + y_int, 51, 28, 0);
	gfx.PutPixel(6 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(7 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(8 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(9 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(10 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(11 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(12 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(13 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(14 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(15 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(16 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(17 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(18 + x_int, 20 + y_int, 123, 69, 0);
	gfx.PutPixel(19 + x_int, 20 + y_int, 51, 28, 0);
	gfx.PutPixel(20 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(21 + x_int, 20 + y_int, 138, 77, 0);
	gfx.PutPixel(22 + x_int, 20 + y_int, 65, 36, 0);
	gfx.PutPixel(23 + x_int, 20 + y_int, 51, 28, 0);
	gfx.PutPixel(0 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(1 + x_int, 21 + y_int, 138, 77, 0);
	gfx.PutPixel(2 + x_int, 21 + y_int, 138, 77, 0);
	gfx.PutPixel(3 + x_int, 21 + y_int, 138, 77, 0);
	gfx.PutPixel(4 + x_int, 21 + y_int, 138, 77, 0);
	gfx.PutPixel(5 + x_int, 21 + y_int, 138, 77, 0);
	gfx.PutPixel(6 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(7 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(8 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(9 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(10 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(11 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(12 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(13 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(14 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(15 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(16 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(17 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(18 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(20 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(21 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(22 + x_int, 21 + y_int, 51, 28, 0);
	gfx.PutPixel(0 + x_int, 22 + y_int, 51, 28, 0);
	gfx.PutPixel(1 + x_int, 22 + y_int, 65, 36, 0);
	gfx.PutPixel(2 + x_int, 22 + y_int, 65, 36, 0);
	gfx.PutPixel(3 + x_int, 22 + y_int, 65, 36, 0);
	gfx.PutPixel(4 + x_int, 22 + y_int, 65, 36, 0);
	gfx.PutPixel(5 + x_int, 22 + y_int, 65, 36, 0);
	gfx.PutPixel(6 + x_int, 22 + y_int, 51, 28, 0);
	gfx.PutPixel(1 + x_int, 23 + y_int, 51, 28, 0);
	gfx.PutPixel(2 + x_int, 23 + y_int, 51, 28, 0);
	gfx.PutPixel(3 + x_int, 23 + y_int, 51, 28, 0);
	gfx.PutPixel(4 + x_int, 23 + y_int, 51, 28, 0);
	gfx.PutPixel(5 + x_int, 23 + y_int, 51, 28, 0);
	gfx.PutPixel(6 + x_int, 23 + y_int, 51, 28, 0);
}

bool Poo::IsEaten() const
{
	return isEaten;
}