#include "Precompiled.h"
#include "Transform.h"
#include "ComponentType.h"

Transform::Transform(Vector3 Position, Vector3 Rotation, Vector3 Scale) :
	position(Position),
	rotation(Rotation),
	scale(Scale),
	Component(ComponentType::Transform)
{}

Transform::~Transform() = default;

void Transform::initialize() {
	// TODO
}

void Transform::update(float dt) {
	// TODO
}