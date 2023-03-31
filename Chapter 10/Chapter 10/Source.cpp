#include <iostream>

#include "clockType.h"

int main() {
	clockType h(11, 33, 22);
	int a, b, c;
	h.getTime(a, b, c);
	std::cout << a << b << c << std::endl;
	h.printTime();
	return 0;
}