#pragma once

#include <iostream>

#include "Object.h"

namespace tgc {

	class _Wall : public _Object{
	private:
	protected:
	public:
		_Wall() { _symbol = '#'; };
		char draw()override;
	};
}

char tgc::_Wall::draw()
{
	return _symbol;
}