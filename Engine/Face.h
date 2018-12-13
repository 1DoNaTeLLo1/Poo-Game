#pragma once
#include "Graphics.h"
#include "MainWindow.h"

class Face
{
private:
	int x = 400;
	int y = 300;
	static constexpr int width = 19;
	static constexpr int height = 19;

public:
	void BorderTest();
	void Draw(Graphics& gfx) const;
	void Update(MainWindow& wnd);
	int GetX() const;
	int GetY() const;
	const int GetWidth() const;
	const int GetHeight() const;
};

