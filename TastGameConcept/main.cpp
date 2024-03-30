#include <iostream>
#include <Windows.h>
#include "Game.h"

int main() {
	tgc::Game g;
	tgc::Player pl1 = new tgc::_Player;
	tgc::Player pl2 = new tgc::_Player;
	int i = 0;
	while (true) {
		if (i == 10) break;
		pl1->moveX(1);
		pl2->moveY(1);
		g.draw(pl1);
		g.draw(pl2);
		i++;
		g.update();
		Sleep(1000);
	}
	return 0;
}