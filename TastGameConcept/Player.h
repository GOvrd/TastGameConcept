#pragma once
#include <iostream>
#include <vector>
#include "Object.h"
#include "Item.h"

#define INVENTORY_SIZE 10

namespace tgc {

	//typedef _Object* Object;
	typedef std::vector<double> vector2f;
	typedef _Item* Item;

	class _Player : public _Object{
	private:
		std::vector<Item> _inventory;
	protected:
	public:
		_Player();
		void draw() override;
		void moveX(int);
		void moveY(int);
		void move(int, int);
		void printAllItems();
		bool addItem(Item);
		Item getItem();//<---DO-IT---
	};
}

tgc::_Player::_Player()
{
	//_inventory.resize(INVENTORY_SIZE, nullptr);//KOCTÜIL`
}

void tgc::_Player::draw()
{
	std::cout << _pos[0] << ", " << _pos[1] << "\n";
}

void tgc::_Player::moveX(int dx)
{
	_pos[0] += dx;
}

void tgc::_Player::moveY(int dy)
{
	_pos[1] += dy;
}

void tgc::_Player::move(int dx, int dy)
{
	_pos[0] += dx;
	_pos[1] += dy;
}

void tgc::_Player::printAllItems()
{
	for (Item item : _inventory) item->print();
}

bool tgc::_Player::addItem(Item item)
{
	if (_inventory.size() != INVENTORY_SIZE) {
		_inventory.push_back(item);
		return true;
	}
	else
		return false;
}
