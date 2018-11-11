#include "pch.h"
#include "Vector3.h"

Vector3::Vector3(float xx, float yy, float zz) : x(xx), y(yy), z(zz)
{
}

Vector3::Vector3(float init[3]) 
	: x(init[0])
	, y(init[1])
	, z(init[2])
{
}

Vector3::~Vector3() = default;

Vector3::Vector3(const Vector3& copy) : x(copy.x), y(copy.y), z(copy.z)
{
}

Vector3 Vector3::crossProduct(const Vector3& v2)
{
	return Vector3((y * v2.z) - (z * v2.y), (z * v2.x) - (x * v2.z), (x * v2.y) - (y * v2.x));
}

float Vector3::dotProduct(const Vector3& v2)
{
	return (x * v2.x) + (y * v2.y) + (z * v2.z);
}

Vector3 Vector3::operator+(const Vector3& vector)
{
	return Vector3(x + vector.x, y + vector.y, z + vector.z);
}

Vector3 Vector3::operator-(const Vector3& vector)
{
	return Vector3(x - vector.x, y - vector.y, z - vector.z);
}

Vector3 Vector3::operator*(const float scalar)
{
	return Vector3(x * scalar, y * scalar, z * scalar);
}

Vector3 Vector3::operator/(const float scalar)
{
	return Vector3(x / scalar, y / scalar, z / scalar);
}

Vector3& Vector3::operator=(const Vector3& vector)
{
	x = vector.x;
	y = vector.y;
	z = vector.z;
	return *this;
}

Vector3& Vector3::operator+=(const Vector3& vector)
{
	x = x + vector.x;
	y = y + vector.y;
	z = z + vector.z;
	return *this;
}

Vector3& Vector3::operator-=(const Vector3& vector)
{
	x = x - vector.x;
	y = y - vector.y;
	z = z - vector.z;
	return *this;
}

Vector3& Vector3::operator*=(const float scalar)
{
	x = x * scalar;
	y = y * scalar;
	z = z * scalar;
	return *this;
}

Vector3& Vector3::operator/=(const float scalar)
{
	x = x / scalar;
	y = y / scalar;
	z = z / scalar;
	return *this;
}

bool Vector3::operator==(const Vector3& vector)
{
	return x == vector.x && y == vector.y && z == vector.z;
}