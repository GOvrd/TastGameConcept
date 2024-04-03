#include <iostream>
#include <Windows.h>
#include "Game.h"

int main() {
	tgc::Game g;
	g.setFPSLimit(24);
	tgc::Player pl1 = new tgc::_Player;
	int i = 0;
	while (true) {
		if (i == 10) break;
		pl1->moveX(1);
		g.draw(pl1);
		i++;
		g.update();
	}
	return 0;
}