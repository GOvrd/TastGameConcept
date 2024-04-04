#include <iostream>
#include <Windows.h>
#include "Game.h"

int main() {
	tgc::Game g(15, 15);
	g.setFPSLimit(1);
	tgc::Player pl1 = new tgc::_Player;
	int i = 0;
	while (i != 10) {
		pl1->move(1, 1);
		
		g.draw(pl1);
		g.update();
		//pl1->printAllItems();
		i++;
		
	}
	return 0;
}