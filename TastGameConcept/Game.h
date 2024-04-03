#pragma once
#include <iostream>
#include <set>
#include <Windows.h>

#include "Object.h"
#include "Player.h"
#include "Item.h"



namespace tgc {

	//typedef std::vector<int> vector2i;
	//typedef std::vector<double> vector2f;
	typedef _Object* Object;
	typedef _Player* Player;
	typedef _Item* Item;

	class Game {
	private:
		std::set<Object> _objects;
		int _fps = 60;
	public:
		Game() {};
		void draw(Object);
		void update();
		void setFPSLimit(int);
	};
}

void tgc::Game::draw(Object obj)
{
	_objects.insert(obj);
	
}

void tgc::Game::update()
{
	//draw all objects
	for (Object obj : _objects) obj->draw();
	Sleep(1000 / _fps);
}

void tgc::Game::setFPSLimit(int fps)
{
	_fps = fps;
}
