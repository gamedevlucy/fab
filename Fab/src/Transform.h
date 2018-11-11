#pragma once
#include "Vector3.h"
#include "Component.h"

class Transform : public Component
{
public:
	Transform(Vector3 position, Vector3 rotation, Vector3 scale);
	virtual ~Transform();

	Vector3 position, rotation, scale;

	virtual void initialize() override;
	virtual void update(float dt) override;
};