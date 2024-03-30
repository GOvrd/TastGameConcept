#pragma once
#include <vector>

namespace tgc {

	typedef std::vector<double> vector2f;

	class _Object {
	protected:
		bool visible = false;
		vector2f pos = { 0.0, 0.0 };
	public:
		_Object() {};
		void setPos(int, int);
		vector2f getPos() const;

		virtual void draw() = 0;
	};
}

void tgc::_Object::setPos(int x, int y)
{
	pos[0] = x;
	pos[1] = y;
}

tgc::vector2f tgc::_Object::getPos() const
{
	return pos;
}





