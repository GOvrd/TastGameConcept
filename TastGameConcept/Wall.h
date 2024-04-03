#pragma once

#include <iostream>

#include "Object.h"

namespace tgc {

	class _Wall : public _Object{
	private:
	protected:
	public:
		_Wall() {};
		void draw()override {
			std::cout << '#';
		}
	};
}