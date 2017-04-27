#include "board.h"

int Board::getSize() {
	return size;
}

Unit * Board::getUnitAt(int x, int y) {
	return board[x*size+y];
}