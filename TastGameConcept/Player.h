#pragma once

#include "Object.h"

namespace tgc {

	typedef std::vector<double> vector2f;
	typedef _Object* Object;

	class Player : public _Object{
	private:
	protected:
	public:
		Player() {};
		void draw() override;
		void moveX(int);
		void moveY(int);
		void move(int, int);
	};
}

void tgc::Player::moveX(int dx)
{
	pos[0] += dx;
}

void tgc::Player::moveY(int dy)
{
	pos[1] += dy;
}

void tgc::Player::move(int dx, int dy)
{
	pos[0] += dx;
	pos[1] += dy;
}
