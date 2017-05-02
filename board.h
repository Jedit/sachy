#include <cstdlib>

#include "unit.h"

#ifndef BOARD_SACHY
#define BOARD_SACHY

class Board{
	public:
		Board(int s=8) : size(s) {
			board = new Unit*[size*size];
			for(int i = 0; i < (size*size); i++) {
				board[i] = NULL;
			}
		}
		~Board() {
			for(int i = 0; i < (size*size); i++) {
				delete board[i];
			}
			delete board;
		}
		int getSize();
		Unit * getUnitAt(int x, int y);
	private:
		int size;
		Unit ** board;
};

#endif