#pragma once
class Vector3
{
public:
	Vector3(float x, float y, float z);
	Vector3(float init[3]);
	Vector3(const Vector3& copy);
	~Vector3();
	
	float x, y, z;

	Vector3 crossProduct(const Vector3& v2);
	float dotProduct(const Vector3& v2);

	Vector3 operator + (const Vector3& v2);
	Vector3 operator - (const Vector3& v2);
	Vector3 operator * (const float scalar);
	Vector3 operator / (const float scalar);
	Vector3& operator = (const Vector3& v2);
	Vector3& operator += (const Vector3& v2);
	Vector3& operator -= (const Vector3& v2);
	Vector3& operator *= (const float scalar);
	Vector3& operator /= (const float scalar);
	bool operator == (const Vector3& v2);
};