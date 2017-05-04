#ifndef MOVE_SACHY
#define MOVE_SACHY

#include "pos.h"

class Move{
	public:
		Move(Pos f = Pos(), Pos t = Pos()) {
			m_from = f;
			m_to = t;
		}
		Pos from();
		Pos to();
	private:
		Pos m_from;
		Pos m_to;
};

#endif