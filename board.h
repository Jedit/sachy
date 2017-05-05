#ifndef BOARD_SACHY
#define BOARD_SACHY

#include <cstdlib>

#include "unit.h"

class Board{
	public:
		Board(int s=8) : size(s) {
			field = new Unit*[size*size];
			for(int i = 0; i < (size*size); i++) {
				field[i] = NULL;
			}
		}
		~Board() {
			for(int i = 0; i < (size*size); i++) {
				delete field[i];
			}
			delete field;
		}
		int getSize();
		Unit * getUnitAt(int x, int y);
	private:
		int size;
		Unit ** field;
		Unit ** dead;
};

#endif
