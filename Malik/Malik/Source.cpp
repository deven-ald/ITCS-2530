#include <iostream>
#include <math.h>
/*
#########################################################################
Author: Devendra Ranjan
Date: 1/21/2023
11, 14, 16, 22, 23 - 8th edition. << Problems from Malik C++ Programming
ITCS 2530
#########################################################################
*/

//Allows me to not have to type std::
using namespace std;
//Rounds Number to nearest tenth some of this code was inspired by w3Schools but I count that as documentation 

//Allows functions to be used
double RoundHundreth(double);
int GasolineTank();
int HardDrive();
void Milk();
void MetricTon();
void Cindy();

int main()
{
	//counter variable
	int h = 0;
	//decision variable
	int entrypoint;
	while (h < 1) {
		//prompts the user for a selection
		cout << "Please enter a programming problem number:  (11, 14, 16, 22, or 23)" << endl;
		//obtains that selection
		cin >> entrypoint;
		
		if (entrypoint == 11) 
		{
			GasolineTank();
		}
		else if (entrypoint == 14)
		{
			HardDrive();
		}
		else if (entrypoint == 16)
		{
			Milk();
		}
		else if (entrypoint == 22)
		{
			MetricTon();
		}
		else if (entrypoint == 23)
		{
			Cindy();
		}


		//Exit Option 
		string Exitoption;
		cout << "Would you like to exit? (Y to exit or N to go back to selection)" << endl;
		cin >> Exitoption;
		if (Exitoption == "Y")
		{
			h = 1;
		}
	}
	return 0;
}

double RoundHundreth(double Num)
{
	double r;
	r = floor(Num) + floor((Num - floor(Num)) * 100.0 + 0.5) / 100.0;
	return r;

}
// The following function prompts the user for the number of gallons that a tank can hold and the miles per gallon their car can achieve
int GasolineTank()
{
	int b = 0;
	while (b < 1) {
		//Initializing my Necessary Variables

		double Capacity;
		double mpg;
		double TotalMiles;

		//Prompt
		cout << "Please enter the capacity (in gallons) of your vehicle's fuel tank: " << endl;
		cin >> Capacity;
		cout << "" << endl;
		cout << "Please enter the miles per gallon your car averages: " << endl;
		cin >> mpg;
		cout << "" << endl;

		//Calulates Total Miles Until Empty
		TotalMiles = Capacity * mpg;


		//Outputs the program's initiative 
		cout << "Your vehicle's fuel tank can handle : " << Capacity << " Gallons" << endl;
		cout << "" << endl;
		cout << "Your car averages: " << mpg << " Miles Per Gallon" << endl;
		cout << "" << endl;
		cout << "Distance until empty: " << TotalMiles << " Miles" << endl;
		cout << "" << endl;

		//Asks User if they would like to return
		string menuoption2;
		cout << "Would you like to return to menu? (Y or N)" << endl;
		cin >> menuoption2;
		if (menuoption2 == "Y")
		{
			b = 1;
		}
	}
	return 0;
}

//This function calculates the true storage capacity of a hard drive 
int HardDrive()
{
	int c = 0;
	while (c < 1) {
		//Initialized variables for the manufacturer's printed Gigabyte Storage, the True storage based off of the binary that computer's use to
		//calculate the total size. Finally, the difference between the two.
		double Manufacturer;
		double TrueStorage;
		double Difference;
		//Prompt:
		cout << "Please enter the reported size of your hard drive as printed by your manufacturer:" << endl;
		cin >> Manufacturer;
		cout << "" << endl;

		//Calculations
		TrueStorage = ((Manufacturer * pow(10, 9)) / 1024) / 1024 / 1024;
		Difference = Manufacturer - TrueStorage;


		//output
		cout << "The true capacity of your hard drive is approximately: " << RoundHundreth(TrueStorage) << " Gigabytes" << endl;
		cout << "" << endl;
		cout << "That means you missed out on approximately: " << RoundHundreth(Difference) << " Gigabytes :(" << endl;
		cout << "" << endl;

		//Asks User if they would like to return to menu
		string menuoption3;
		cout << "Would you like to return to menu? (Y or N)" << endl;

		cin >> menuoption3;
		if (menuoption3 == "Y")
		{
			c = 1;
		}
	}
	return 0;

}

//This function Calculates what Programming Problem 16 asks in the book
void Milk()
{
	int d = 0;
	while (d < 1) {
		//Initializes Variables
		double CartonCapacity = 3.78;
		double CostPerLiter = 0.38;
		double Profit = 0.27;
		double AmountMilk;
		double NumCartons;
		double ProductionCost;
		double ProfitFinal;

		//Prompt
		cout << "Please enter the amount (in liters) of milk that was produced this morning:  " << endl;
		cin >> AmountMilk;
		cout << "" << endl;

		//Calculations
		NumCartons = round(AmountMilk / CartonCapacity);
		//The following is assuming that they don't want the amount of liters rounded to the nearest integer
		ProductionCost = AmountMilk * CostPerLiter;
		ProfitFinal = NumCartons * Profit;

		//Output
		cout << "The number of cartons that can be produced with " << AmountMilk << " liters of milk is:  " << NumCartons << " Cartons" << endl;
		cout << "" << endl;
		cout << "The cost of producing " << AmountMilk << " liters of milk is:  $" << ProductionCost << endl;
		cout << "" << endl;
		cout << "Total profit margin for today's haul of milk is:  $" << ProfitFinal << endl;
		cout << "" << endl;

		//Asks User if they would like to return to menu or restart
		string menuoption4;
		cout << "Would you like to return to menu? (Y or N)" << endl;

		cin >> menuoption4;

		if (menuoption4 == "Y")
		{
			d = 1;
		}
	}
}

//The following function determines the amount of bags of rice needed to produce a metric ton of rice
void MetricTon()
{
	int e = 0;
	while (e < 1)
	{
		//initializes variables
		double MetricTon = 2205;
		double ricebag;
		double numbags;

		//prompt
		cout << "Please enter the amount (in pounds) of rice your bag can carry:" << endl;
		cin >> ricebag;
		cout << "" << endl;

		//Calculation
		numbags = MetricTon / ricebag;

		//Output
		cout << "You would need approximately " << round(numbags) << " bags to hold a metric ton of rice." << endl;

		//Asks User if they would like to return to menu
		string menuoption5;
		cout << "Would you like to return to menu? (Y or N)" << endl;
		cin >> menuoption5;
		if (menuoption5 == "Y")
		{
			e = 1;
		}
	}
}

//This function helps cindy with her stocks and bonds
void Cindy()
{
	int a = 0;
	while (a < 1) {
		//Initilizes variables
		double brokeragefee = 1.5;
		double sharessold;
		double pricebought;
		double pricesold;
		double difference;
		double servecharge;
		double spent;
		double recieved;

		//Prompt
		cout << "Please enter the number of shares sold:  " << endl;
		//GETS HOW MANY SHARES WERE SOLD
		cin >> sharessold;
		cout << "" << endl;
		cout << "Please enter the purchase price of the stock per share:  " << endl;
		//GETS HOW MUCH THOSE SHARES WERE AT THE TIME OF PURCHASE
		cin >> pricebought;
		cout << "" << endl;
		cout << "Please enter the price at which the shares were sold:  " << endl;
		//GETS HOW MUCH THE SHARES WERE WORTH AT THE TIME OF SELLING
		cin >> pricesold;
		cout << "" << endl;


		//	Calculations 
		spent = sharessold * pricebought;
		servecharge = spent * brokeragefee / 100;
		recieved = pricesold * sharessold;
		difference = recieved - spent;
		servecharge = servecharge + (recieved * brokeragefee / 100);

		//output
		cout << "Amount invested:   $" << spent << endl;
		cout << "" << endl;
		cout << "Total Service Charge:  $" << servecharge << endl;
		cout << "" << endl;
		cout << "Amount gained or lost:  $" << difference << endl;
		cout << "" << endl;
		cout << "Total balance in this share:  $" << recieved << endl;

		//Asks User if they would like to return to menu
		string menuoption1;
		cout << "Would you like to return to menu? (Y or N)" << endl;
		cin >> menuoption1;
		if (menuoption1 == "Y")
		{
			a = 1;
		}
	}
}
