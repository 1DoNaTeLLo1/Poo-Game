#pragma once
#include "Graphics.h"
#include "Face.h"

class Poo
{
private:
	static constexpr int width = 23;
	static constexpr int height = 23;
	Vec2 loc;
	Vec2 vel;
	bool isEaten = false;
	bool isInit = false;

public:
	void Init(Vec2 loc_ini, Vec2 vel_ini);
	void Update(float dt);
	void BorderTest();
	void CollusionTest(Face& face);
	void Draw(Graphics& gfx) const;
	bool IsEaten() const;
};
