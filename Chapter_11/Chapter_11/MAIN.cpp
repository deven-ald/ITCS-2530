#include "deven.h"
#include "extClockType.h"
#include "cylinderType.h"
deven dev;

using namespace std;

void runext(), runcyl();

int main() {
	int choice;
	bool condition = true;
	while (condition)
	{
		system("cls");
		dev.PrintFile("Text.txt");
		cin >> choice;
		bool c1 = (choice == 1),
			c2 = (choice == 3),
			c3 = (choice == 5),
			c4 = (choice == 9);
		if (c1)
			runext();
		else if (c2)
			runcyl();
		dev.loopend(condition);
	}
	return 0;
}

void runext() {
	system("cls");
	extClockType b(5, 30, 0, "EST");
	b.incrementTz();
	b.printTime();
	Sleep(5000);
	system("cls");
	extClockType a = b;
	if (a.equalTime(b))
	{
		cout << "A is equal to your clock 'b'" << endl;
	}
	else
		cout << "A is NOT equal to your clock 'b'" << endl;


}
void runcyl()
{
	system("cls");
	cylinderType cyl(13, 12);
	double volume = cyl.volume();
	double surfarea = cyl.surfaceArea();
	cout << endl <<  "Volume: " << volume << endl << "Surface area: " << surfarea << endl;
	dev.print("Afer changing height and center: ");
	cyl.setRadius(10);
	cyl.setHeight(9000);
	volume = cyl.volume();
	surfarea = cyl.surfaceArea();
	cyl.setCenter(10, 10);
	cout << endl << "Volume: " << volume << endl << "Surface area: " << surfarea << endl;
	system("pause");
}