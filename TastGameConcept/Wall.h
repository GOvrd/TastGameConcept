#pragma once

#include <iostream>

#include "Object.h"

namespace tgc {

	class _Wall : public _Object{
	private:
	protected:
	public:
		//_Wall() {};
		_Wall(int, int);
		char draw()override;
	};
}

tgc::_Wall::_Wall(int x = 0, int y = 0)
{
	_symbol = '#';
	_pos[0] = x;
	_pos[1] = y;
}

char tgc::_Wall::draw()
{
	return _symbol;
}