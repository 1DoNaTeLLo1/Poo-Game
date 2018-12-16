#include "Vec2.h"

Vec2::Vec2(float x_in, float y_in)
{
	x = x_in;
	y = y_in;
}

Vec2 Vec2::operator+(const Vec2 & rhs) const
{
	return Vec2(x + rhs.x, y + rhs.y);
}

Vec2& Vec2::operator+=(const Vec2 & rhs)
{
	return *this = *this + rhs;
}

Vec2 Vec2::operator-(const Vec2 & rhs) const
{
	return Vec2(x - rhs.x, y - rhs.y);
}

Vec2 & Vec2::operator-=(const Vec2 & rhs)
{
	return *this = *this - rhs;
}

Vec2 Vec2::operator*(float k) const
{
	return Vec2(x*k, y*k);
}

Vec2 & Vec2::operator*=(float k)
{
	return *this = *this * k;
}

float Vec2::GetLength()
{
	return std::sqrt(GetLengthSqr());
}

float Vec2::GetLengthSqr()
{
	return x * x + y * y;
}

Vec2 & Vec2::Normalize()
{
	return *this = GetNormalized();
}

Vec2 Vec2::GetNormalized()
{
	const float length = GetLength();

	if (length != 0.0f)
	{
		return *this * (1.0f / length);
	}
	return *this;
}
