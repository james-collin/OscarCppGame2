#pragma once
#include "Inc.h"
class Bullet
{
public:
	Sprite shape;
	bool leftWall;
	bool rightWall;

	Bullet(Texture *texture, Vector2f pos)
	{
		this->leftWall = false;

		this->rightWall = false;

		this->shape.setTexture(*texture);

		this->shape.setScale(2.f, 2.f);

		this->shape.setPosition(pos);
	}
	~Bullet() {}
};