#include <iostream>>
#include <math.h>
using namespace std;
/*
Author: Devendra Ranjan

Overview: This is a simple program developed for the in class assignment for ITCS-2530. I understand I did a little more than what was asked but I wanted to challenge
myself a little bit I was originally going to write a program that would draw the shapes and draw the equations but it was too out-of-scope and I felt as if I didn't
know if the framework would be installed on your computer to be used so I guess that's a question I have.
*/
int main()
{
	int h = 0;
	while (h != 1) {
		string input = "";
		string input2 = "";
		cout << "Type 'square' if you want to find the area and perimeter of a square and 'triangle' if you want to find out if a \n triangle is a right triangle" << endl;
		cin >> input;
		if (input == "triangle")
		{
			//Initializes and defines my necessary Variables
			double xOne = 0;
			double xTwo = 0;
			//First I want to ask for Input on the triangle 
			cout << "Please Enter the first length of your triangle (the Base of the triangle)" << endl;
			cin >> xTwo;
			cout << "Please Enter the second degree of your triangle (the length of the Altitude line)" << endl;
			cin >> xOne;
			//Init other variables as well as calculates the necessary information to execute the code properly
			double RightTri = (pow(xOne, 2) + pow(xTwo, 2));
			double hypotenuse = sqrt(RightTri);
			double ifisRight = pow(hypotenuse, 2);
			cout << "" << endl;
			cout << "Your Hypotenuse is: " << hypotenuse << endl;
			cout << "" << endl;
			//Conditional to give an output:
			if (ifisRight == RightTri) {
				cout << "This is a right triangle because the sum of the squared lines provided are equal to the square of the hypotenuse.";
			}
			else if (ifisRight > RightTri) {
				cout << "This is an OBTUSE Triangle because the sum of the squared lines provided are less than the hypotenuse";
			}
			else if (ifisRight < RightTri) {
				cout << "This is an ACUTE Triangle because the sum of the squared lines provided are greater than the hypotenuse";
			}
			cout << "" << endl;
			cout << "Please enter 'Done' if done and 'Reset' to reset the program" << endl;
			cin >> input2;
			if (input2 == "Done")
			{
				h = 1;
			}
		}
		else if (input == "square")
		{
			//This is a simpler program that outputs perimeter and area of a polygon. It can be a rectangle and is not limited to only squares.
			float length = 0;
			float width = 0;
			cout << "Please enter the length of your polygon:" << endl;
			cin >> length;
			cout << "Please enter the width of your polygon: " << endl;
			cin >> width;
			float Pmeter = 2 * (length + width);
			float area = length * width;
			cout << "The Length of your polygon is: " << length << endl;
			cout << "" << endl;
			cout << "The Width of your polygon is:  " << width << endl;
			cout << "" << endl;
			cout << "The Perimeter of your polygon is: " << Pmeter << endl;
			cout << "" << endl;
			cout << "The area of your polygon is:  " << area << endl;
			cout << "" << endl;
			if (length == width) {
				cout << "This is a square" << endl;
			}
			else {
				cout << "This is NOT a square" << endl;
			}
			cout << "Please enter 'Done' if done and 'Reset' to reset the program" << endl;
			cin >> input2;
			if (input2 == "Done")
			{
				h = 1;
			}
		}
		else {
			cout << "Invalid input please try again" << endl;
		}
	}
	return 0;
}