#pragma once
#include <vector>

namespace tgc {

	typedef std::vector<int> vector2i;

	class _Object {
	protected:
		char _symbol;
		bool _visible = true;
		vector2i _pos = { 0, 0};
	public:
		_Object() {};
		void setPos(int, int);
		vector2i getPos() const;
		bool isVisible() const;
		void setVisible(bool);
		virtual char draw() = 0;
	};
}

void tgc::_Object::setPos(int x, int y)
{
	_pos[0] = x;
	_pos[1] = y;
}

tgc::vector2i tgc::_Object::getPos() const
{
	return _pos;
}

bool tgc::_Object::isVisible() const
{
	return _visible;
}

void tgc::_Object::setVisible(bool newState)
{
	_visible = newState;
}
