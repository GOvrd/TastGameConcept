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
		int _col, _row;
		char** _buffer = nullptr;
	public:
		Game(int, int);
		void draw(Object);
		void update();
		void setFPSLimit(int);
	};
}

tgc::Game::Game(int col = 5, int row = 5)
{
	_col = col;
	_row = row;
	_buffer = new char*[_col];
	for (int i = 0; i < _col; i++) {
		_buffer[i] = new char[_row];
		for (int j = 0; j < _row; j++)_buffer[i][j] = ' ';
	}
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
