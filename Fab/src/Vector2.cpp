#include "Precompiled.h"
#include "Vector2.h"

Vector2::Vector2(float xx, float yy) : x(xx), y(yy)
{
}

Vector2::Vector2(float init[2]) : x(init[0]), y(init[1])
{
}

Vector2::Vector2(const Vector2 & copy) : x(copy.x), y(copy.y)
{
}

Vector2::~Vector2() = default;

float Vector2::dotProduct(const Vector2 & v2)
{
	return (x * v2.x) + (y * v2.y);
}

Vector2 Vector2::operator+(const Vector2 & v2)
{
	return Vector2(x + v2.x, y + v2.y);
}

Vector2 Vector2::operator-(const Vector2 & v2)
{
	return Vector2(x - v2.x, y - v2.y);
}

Vector2 Vector2::operator*(const float scalar)
{
	return Vector2(x * scalar, y * scalar);
}

Vector2 Vector2::operator/(const float scalar)
{
	return Vector2(x / scalar, y / scalar);
}

Vector2 & Vector2::operator=(const Vector2 & v2)
{
	x = v2.x;
	y = v2.y;
	return *this;
}

Vector2 & Vector2::operator+=(const Vector2 & v2)
{
	x = x + v2.x;
	y = y + v2.y;
	return *this;
}

Vector2 & Vector2::operator-=(const Vector2 & v2)
{
	x = x - v2.x;
	y = y - v2.y;
	return *this;
}

Vector2 & Vector2::operator*=(const float scalar)
{
	x = x * scalar;
	y = y * scalar;
	return *this;
}

Vector2 & Vector2::operator/=(const float scalar)
{
	x = x / scalar;
	y = y / scalar;
	return *this;
}

bool Vector2::operator==(const Vector2 & v2)
{
	return x == v2.x && y == v2.y;
}
