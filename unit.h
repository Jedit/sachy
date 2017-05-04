#ifndef UNIT_SACHY
#define UNIT_SACHY

#include <cstdlib>

class Board;

class Unit{
	public:
		Unit(bool isWhite = true) {
			white = isWhite;
		}
		virtual ~Unit() {
			
		}
		virtual vector<Pos> getPosibleMoves(const Board * b, const Pos & pos);
	protected:
		bool white;
};

#endif