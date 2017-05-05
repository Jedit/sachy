#ifndef UNIT_SACHY
#define UNIT_SACHY

#include <vector>
#include <string>

#include "pos.h"

class Board;

class Unit{
	public:
		Unit(bool isWhite = true) {
			white = isWhite;
		}
		virtual ~Unit() {
			
		}
		virtual std::vector<Pos> getPosibleMoves(const Board * b, const Pos & pos) = 0;
		virtual std::string getTypeName() = 0;
	protected:
		bool white;
};

#endif
