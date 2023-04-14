#include <iostream>
#include <math.h>
#include "boxType.h"
using namespace std;

int main() {
	boxType s;
	s.setDimension(1, 2, 3);
	cout << s.area() << endl;
	s.print();
	return 0;
}