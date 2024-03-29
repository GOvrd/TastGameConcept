#pragma once
#include <iostream>
#include <list>
#include <vector>

#include "Object.h"

namespace tgc {
	typedef std::vector<int> vector2i;
	typedef std::vector<double> vector2f;


	class Game {
	private:
		std::list<Object> objects;
	public:
		Game() {};
		void draw(std::list<Object>&);
		void update();
	};
}

void tgc::Game::draw(std::list<Object>& newObjList)
{
	objects.clear();
	objects = newObjList;
}