#pragma once
#include "Graphics.h"
#include "MainWindow.h"
#include "Vec2.h"

class Face
{
private:
	Vec2 loc;
	Vec2 vel;
	static constexpr int width = 19;
	static constexpr int height = 19;

public:
	Face();
	void BorderTest();
	void Draw(Graphics& gfx) const;
	void Update(MainWindow& wnd, float dt);
	Vec2 GetLocation() const;
	const int GetWidth() const;
	const int GetHeight() const;
};

