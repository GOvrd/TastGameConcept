#pragma once
#include <iostream>
#include "Object.h"

namespace tgc {

	typedef std::vector<double> vector2f;
	typedef _Object* Object;

	class _Player : public _Object{
	private:
	protected:
	public:
		_Player() {};
		void draw() override;
		void moveX(int);
		void moveY(int);
		void move(int, int);
	};
}

void tgc::_Player::draw()
{
	std::cout << pos[0] << ", " << pos[1] << "\n";
}

void tgc::_Player::moveX(int dx)
{
	pos[0] += dx;
}

void tgc::_Player::moveY(int dy)
{
	pos[1] += dy;
}

void tgc::_Player::move(int dx, int dy)
{
	pos[0] += dx;
	pos[1] += dy;
}
