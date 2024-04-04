#include <iostream>
#include <Windows.h>
#include "Game.h"

int main() {
	tgc::Game g(10, 10);
	g.setFPSLimit(60);
	g.loadMap("Map.txt");
	tgc::Player pl1 = new tgc::_Player(1, 1);
	int i = 0;
	int speed = 1;
	while (true) {
		if (pl1->getPos().at(0) == 8) speed = -1;
		if (pl1->getPos().at(0) == 1) speed = 1;
		pl1->move(speed, speed);
		
		g.draw(pl1);
		g.update();
		//pl1->printAllItems();
		i++;
		
	}
	return 0;
}