#pragma once
#include <cmath>

class Vec2
{
public:
	float x;
	float y;

	Vec2(float x_in, float y_in);
	Vec2() = default;
	Vec2 operator+(const Vec2& rhs) const;
	Vec2& operator+=(const Vec2& rhs);
	Vec2 operator-(const Vec2& rhs) const;
	Vec2& operator-=(const Vec2& rhs);
	Vec2 operator*(float k) const;
	Vec2& operator*=(float k);
	float GetLength();
	float GetLengthSqr();
	Vec2& Normalize();
	Vec2 GetNormalized();
};