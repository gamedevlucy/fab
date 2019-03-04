#pragma once
class Vector2
{
public:
	Vector2(float x, float y);
	Vector2(float init[2]);
	Vector2(const Vector2& copy);
	~Vector2();

	float x, y;

	float dotProduct(const Vector2& v2);

	Vector2 operator + (const Vector2& v2);
	Vector2 operator - (const Vector2& v2);
	Vector2 operator * (const float scalar);
	Vector2 operator / (const float scalar);
	Vector2& operator = (const Vector2& v2);
	Vector2& operator += (const Vector2& v2);
	Vector2& operator -= (const Vector2& v2);
	Vector2& operator *= (const float scalar);
	Vector2& operator /= (const float scalar);
	bool operator == (const Vector2& v2);
};

