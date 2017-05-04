#ifndef POS_SACHY
#define POS_SACHY

class Pos{
	public:
		Pos(int x = 0, int y = 0) {
			m_x = x;
			m_y = y;
		}
		int x();
		int y();
	private:
		int m_x;
		int m_y;
};

#endif