#include <iostream>

#include "board.h"
using namespace std;

int main() {
	cout << "Hello world!" << endl;
	int x;
	cin >> x;
	Board b(x);
	cout << "Entered: " << x << " - " << (b.getSize()) << endl;
	return 0;
}