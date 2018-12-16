#include "Face.h"

Face::Face()
{
	loc = Vec2(400, 300);
}

void Face::BorderTest()
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

void Face::Draw(Graphics& gfx) const
{
	int x_int = int(loc.x);
	int y_int = int(loc.y);

	gfx.PutPixel(7 + x_int, 0 + y_int, 0, 0, 0);
	gfx.PutPixel(8 + x_int, 0 + y_int, 0, 0, 0);
	gfx.PutPixel(9 + x_int, 0 + y_int, 0, 0, 0);
	gfx.PutPixel(10 + x_int, 0 + y_int, 0, 0, 0);
	gfx.PutPixel(11 + x_int, 0 + y_int, 0, 0, 0);
	gfx.PutPixel(12 + x_int, 0 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 1 + y_int, 0, 0, 0);
	gfx.PutPixel(6 + x_int, 1 + y_int, 0, 0, 0);
	gfx.PutPixel(7 + x_int, 1 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 1 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 1 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 1 + y_int, 254, 221, 88);
	gfx.PutPixel(11 + x_int, 1 + y_int, 254, 221, 88);
	gfx.PutPixel(12 + x_int, 1 + y_int, 254, 221, 88);
	gfx.PutPixel(13 + x_int, 1 + y_int, 0, 0, 0);
	gfx.PutPixel(14 + x_int, 1 + y_int, 0, 0, 0);
	gfx.PutPixel(3 + x_int, 2 + y_int, 0, 0, 0);
	gfx.PutPixel(4 + x_int, 2 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(6 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(11 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(12 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(13 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(14 + x_int, 2 + y_int, 254, 221, 88);
	gfx.PutPixel(15 + x_int, 2 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 2 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 3 + y_int, 0, 0, 0);
	gfx.PutPixel(3 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(5 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(6 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(11 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(12 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(13 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(14 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(15 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(16 + x_int, 3 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 3 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 4 + y_int, 0, 0, 0);
	gfx.PutPixel(3 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(5 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(6 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(11 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(12 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(13 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(14 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(15 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(16 + x_int, 4 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 4 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 5 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(3 + x_int, 5 + y_int, 0, 0, 0);
	gfx.PutPixel(4 + x_int, 5 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(6 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(11 + x_int, 5 + y_int, 0, 0, 0);
	gfx.PutPixel(12 + x_int, 5 + y_int, 0, 0, 0);
	gfx.PutPixel(13 + x_int, 5 + y_int, 0, 0, 0);
	gfx.PutPixel(14 + x_int, 5 + y_int, 0, 0, 0);
	gfx.PutPixel(15 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(16 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 5 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 5 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(3 + x_int, 6 + y_int, 255, 255, 255);
	gfx.PutPixel(4 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(6 + x_int, 6 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 6 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 6 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 6 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(11 + x_int, 6 + y_int, 255, 255, 255);
	gfx.PutPixel(12 + x_int, 6 + y_int, 255, 255, 255);
	gfx.PutPixel(13 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(14 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(15 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 6 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 6 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 6 + y_int, 0, 0, 0);
	gfx.PutPixel(0 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 7 + y_int, 255, 255, 255);
	gfx.PutPixel(3 + x_int, 7 + y_int, 255, 255, 255);
	gfx.PutPixel(4 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(6 + x_int, 7 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 7 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 7 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 7 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(11 + x_int, 7 + y_int, 255, 255, 255);
	gfx.PutPixel(12 + x_int, 7 + y_int, 255, 255, 255);
	gfx.PutPixel(13 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(14 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(15 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 7 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 7 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 7 + y_int, 254, 221, 88);
	gfx.PutPixel(19 + x_int, 7 + y_int, 0, 0, 0);
	gfx.PutPixel(0 + x_int, 8 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 8 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 8 + y_int, 255, 255, 255);
	gfx.PutPixel(3 + x_int, 8 + y_int, 255, 255, 255);
	gfx.PutPixel(4 + x_int, 8 + y_int, 255, 255, 255);
	gfx.PutPixel(5 + x_int, 8 + y_int, 0, 0, 0);
	gfx.PutPixel(6 + x_int, 8 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 8 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 8 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 8 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 8 + y_int, 0, 0, 0);
	gfx.PutPixel(11 + x_int, 8 + y_int, 255, 255, 255);
	gfx.PutPixel(12 + x_int, 8 + y_int, 255, 255, 255);
	gfx.PutPixel(13 + x_int, 8 + y_int, 255, 255, 255);
	gfx.PutPixel(14 + x_int, 8 + y_int, 255, 255, 255);
	gfx.PutPixel(15 + x_int, 8 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 8 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 8 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 8 + y_int, 254, 221, 88);
	gfx.PutPixel(19 + x_int, 8 + y_int, 0, 0, 0);
	gfx.PutPixel(0 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(2 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(3 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(4 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(6 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(11 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(12 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(13 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(14 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(15 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(16 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 9 + y_int, 254, 221, 88);
	gfx.PutPixel(19 + x_int, 9 + y_int, 0, 0, 0);
	gfx.PutPixel(0 + x_int, 10 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(2 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(3 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(5 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(6 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(11 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(12 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(13 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(14 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(15 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(16 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 10 + y_int, 254, 221, 88);
	gfx.PutPixel(19 + x_int, 10 + y_int, 0, 0, 0);
	gfx.PutPixel(0 + x_int, 11 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(2 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(3 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(5 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(6 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(7 + x_int, 11 + y_int, 20, 14, 18);
	gfx.PutPixel(8 + x_int, 11 + y_int, 18, 11, 14);
	gfx.PutPixel(9 + x_int, 11 + y_int, 18, 12, 14);
	gfx.PutPixel(10 + x_int, 11 + y_int, 18, 12, 14);
	gfx.PutPixel(11 + x_int, 11 + y_int, 21, 13, 16);
	gfx.PutPixel(12 + x_int, 11 + y_int, 24, 11, 15);
	gfx.PutPixel(13 + x_int, 11 + y_int, 0, 0, 0);
	gfx.PutPixel(14 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(15 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(16 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 11 + y_int, 254, 221, 88);
	gfx.PutPixel(19 + x_int, 11 + y_int, 0, 0, 0);
	gfx.PutPixel(0 + x_int, 12 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(2 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(3 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(5 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(6 + x_int, 12 + y_int, 23, 9, 23);
	gfx.PutPixel(7 + x_int, 12 + y_int, 135, 26, 68);
	gfx.PutPixel(8 + x_int, 12 + y_int, 135, 26, 68);
	gfx.PutPixel(9 + x_int, 12 + y_int, 135, 26, 68);
	gfx.PutPixel(10 + x_int, 12 + y_int, 135, 26, 68);
	gfx.PutPixel(11 + x_int, 12 + y_int, 135, 26, 68);
	gfx.PutPixel(12 + x_int, 12 + y_int, 135, 26, 68);
	gfx.PutPixel(13 + x_int, 12 + y_int, 135, 26, 68);
	gfx.PutPixel(14 + x_int, 12 + y_int, 0, 0, 0);
	gfx.PutPixel(15 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(16 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 12 + y_int, 254, 221, 88);
	gfx.PutPixel(19 + x_int, 12 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 13 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 13 + y_int, 254, 221, 88);
	gfx.PutPixel(3 + x_int, 13 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 13 + y_int, 254, 221, 88);
	gfx.PutPixel(5 + x_int, 13 + y_int, 0, 0, 0);
	gfx.PutPixel(6 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(7 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(8 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(9 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(10 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(11 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(12 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(13 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(14 + x_int, 13 + y_int, 135, 26, 68);
	gfx.PutPixel(15 + x_int, 13 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 13 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 13 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 13 + y_int, 0, 0, 0);
	gfx.PutPixel(1 + x_int, 14 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 14 + y_int, 254, 221, 88);
	gfx.PutPixel(3 + x_int, 14 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 14 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 14 + y_int, 135, 26, 68);
	gfx.PutPixel(6 + x_int, 14 + y_int, 135, 26, 68);
	gfx.PutPixel(7 + x_int, 14 + y_int, 135, 26, 68);
	gfx.PutPixel(8 + x_int, 14 + y_int, 135, 26, 68);
	gfx.PutPixel(9 + x_int, 14 + y_int, 251, 192, 224);
	gfx.PutPixel(10 + x_int, 14 + y_int, 251, 192, 224);
	gfx.PutPixel(11 + x_int, 14 + y_int, 251, 192, 224);
	gfx.PutPixel(12 + x_int, 14 + y_int, 251, 192, 224);
	gfx.PutPixel(13 + x_int, 14 + y_int, 135, 26, 68);
	gfx.PutPixel(14 + x_int, 14 + y_int, 135, 26, 68);
	gfx.PutPixel(15 + x_int, 14 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 14 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 14 + y_int, 254, 221, 88);
	gfx.PutPixel(18 + x_int, 14 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 15 + y_int, 0, 0, 0);
	gfx.PutPixel(3 + x_int, 15 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 15 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 15 + y_int, 135, 26, 68);
	gfx.PutPixel(6 + x_int, 15 + y_int, 135, 26, 68);
	gfx.PutPixel(7 + x_int, 15 + y_int, 135, 26, 68);
	gfx.PutPixel(8 + x_int, 15 + y_int, 251, 192, 224);
	gfx.PutPixel(9 + x_int, 15 + y_int, 251, 192, 224);
	gfx.PutPixel(10 + x_int, 15 + y_int, 251, 192, 224);
	gfx.PutPixel(11 + x_int, 15 + y_int, 251, 192, 224);
	gfx.PutPixel(12 + x_int, 15 + y_int, 251, 192, 224);
	gfx.PutPixel(13 + x_int, 15 + y_int, 251, 192, 224);
	gfx.PutPixel(14 + x_int, 15 + y_int, 135, 26, 68);
	gfx.PutPixel(15 + x_int, 15 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 15 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 15 + y_int, 0, 0, 0);
	gfx.PutPixel(2 + x_int, 16 + y_int, 0, 0, 0);
	gfx.PutPixel(3 + x_int, 16 + y_int, 254, 221, 88);
	gfx.PutPixel(4 + x_int, 16 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 16 + y_int, 135, 26, 68);
	gfx.PutPixel(6 + x_int, 16 + y_int, 135, 26, 68);
	gfx.PutPixel(7 + x_int, 16 + y_int, 135, 26, 68);
	gfx.PutPixel(8 + x_int, 16 + y_int, 251, 192, 224);
	gfx.PutPixel(9 + x_int, 16 + y_int, 251, 192, 224);
	gfx.PutPixel(10 + x_int, 16 + y_int, 251, 192, 224);
	gfx.PutPixel(11 + x_int, 16 + y_int, 251, 192, 224);
	gfx.PutPixel(12 + x_int, 16 + y_int, 251, 192, 224);
	gfx.PutPixel(13 + x_int, 16 + y_int, 251, 192, 224);
	gfx.PutPixel(14 + x_int, 16 + y_int, 135, 26, 68);
	gfx.PutPixel(15 + x_int, 16 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 16 + y_int, 254, 221, 88);
	gfx.PutPixel(17 + x_int, 16 + y_int, 0, 0, 0);
	gfx.PutPixel(3 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(4 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(6 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(7 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(8 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(9 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(10 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(11 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(12 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(13 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(14 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(15 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(16 + x_int, 17 + y_int, 0, 0, 0);
	gfx.PutPixel(5 + x_int, 18 + y_int, 0, 0, 0);
	gfx.PutPixel(6 + x_int, 18 + y_int, 0, 0, 0);
	gfx.PutPixel(7 + x_int, 18 + y_int, 254, 221, 88);
	gfx.PutPixel(8 + x_int, 18 + y_int, 254, 221, 88);
	gfx.PutPixel(9 + x_int, 18 + y_int, 254, 221, 88);
	gfx.PutPixel(10 + x_int, 18 + y_int, 254, 221, 88);
	gfx.PutPixel(11 + x_int, 18 + y_int, 254, 221, 88);
	gfx.PutPixel(12 + x_int, 18 + y_int, 254, 221, 88);
	gfx.PutPixel(13 + x_int, 18 + y_int, 0, 0, 0);
	gfx.PutPixel(14 + x_int, 18 + y_int, 0, 0, 0);
	gfx.PutPixel(7 + x_int, 19 + y_int, 0, 0, 0);
	gfx.PutPixel(8 + x_int, 19 + y_int, 0, 0, 0);
	gfx.PutPixel(9 + x_int, 19 + y_int, 0, 0, 0);
	gfx.PutPixel(10 + x_int, 19 + y_int, 0, 0, 0);
	gfx.PutPixel(11 + x_int, 19 + y_int, 0, 0, 0);
	gfx.PutPixel(12 + x_int, 19 + y_int, 0, 0, 0);
}

void Face::Update(MainWindow& wnd, float dt)
{
	if (wnd.mouse.LeftIsPressed())
	{
		Vec2 mouse_loc(float(wnd.mouse.GetPosX()), float(wnd.mouse.GetPosY()));
		Vec2 mid_loc = loc + Vec2(width / 2, height / 2);
		Vec2 toPointer = mouse_loc - mid_loc;

		if (toPointer.GetLength() >= 1)
		{
			loc += toPointer.GetNormalized() * speed * dt;
		}
	}
	else
	{
		Vec2 vel(0.0f, 0.0f);

		if (wnd.kbd.KeyIsPressed(VK_UP))
		{
			vel += Vec2(0.0f, -1.0f);
		}
		if (wnd.kbd.KeyIsPressed(VK_DOWN))
		{
			vel += Vec2(0.0f, 1.0f);
		}
		if (wnd.kbd.KeyIsPressed(VK_LEFT))
		{
			vel += Vec2(-1.0f, 0.0f);
		}
		if (wnd.kbd.KeyIsPressed(VK_RIGHT))
		{
			vel += Vec2(1.0f, 0.0f);
		}

		loc += vel.GetNormalized() * speed * dt;
	}
}

Vec2 Face::GetLocation() const
{
	return loc;
}

const int Face::GetWidth() const
{
	return width;
}

const int Face::GetHeight() const
{
	return height;
}
