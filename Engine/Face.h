#pragma once
#include "Graphics.h"
#include "MainWindow.h"

class Face
{
private:
	float x = 400.0f;
	float y = 300.0f;
	static constexpr int width = 19;
	static constexpr int height = 19;

public:
	void BorderTest();
	void Draw(Graphics& gfx) const;
	void Update(MainWindow& wnd);
	float GetX() const;
	float GetY() const;
	const int GetWidth() const;
	const int GetHeight() const;
};

