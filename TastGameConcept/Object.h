#pragma once
#include <vector>

namespace tgc {

	typedef std::vector<double> vector2f;

	class Object {
	protected:
		vector2f pos = { 0.0, 0.0 };
	public:
		Object() {};
		void setPos(int, int);
		vector2f getPos() const;

		virtual void draw() = 0;
	};
}

void tgc::Object::setPos(int x, int y)
{
	pos[0] = x;
	pos[1] = y;
}

tgc::vector2f tgc::Object::getPos() const
{
	return pos;
}





