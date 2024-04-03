#include <iostream>
#include <Windows.h>
#include "Game.h"

int main() {
	tgc::Game g;
	g.setFPSLimit(1);
	tgc::Player pl1 = new tgc::_Player;

	int i = 0;
	while (i != 10) {
		pl1->moveX(1);
		
		if (i < 3) {
			tgc::Item it = new tgc::_Item;
			pl1->addItem(it);
		}
		
		g.draw(pl1);
		pl1->printAllItems();
		i++;
		g.update();
	}
	return 0;
}