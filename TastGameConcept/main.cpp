#include <iostream>

#include "Game.h"

int main() {
	tgc::Game g;
	tgc::Object obj;
	while (true) {
		g.draw(obj);
	}
	return 0;
}