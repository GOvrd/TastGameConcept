#pragma once
#include <iostream>
#include <set>
#include <vector>

#include "Object.h"

namespace tgc {

	typedef std::vector<int> vector2i;
	typedef std::vector<double> vector2f;
	typedef _Object* Object;

	class Game {
	private:
		std::set<Object> objects;
	public:
		Game() {};
		void draw(Object);
		//void update();
	};
}

void tgc::Game::draw(Object obj)
{
	objects.insert(obj);
	//and draw all objects
	for (Object obj : objects) obj->draw();
}