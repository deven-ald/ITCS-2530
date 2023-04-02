#include "Chapter10.h"
#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
#include <fstream>

void print(std::string);

int main()
{
	bool condition = true;
	while (condition)
	{
		int years, selection;
		double pay;
		std::string name;
		print("Please choose from the following menu");
		print("(1) Init an object with name, years, and pay");
		print("(2) Init an object with just years and pay");
		print("(3) Init an object with just a name");
		print("(4) Init an object with no parameters");
		print("(0) To exit");
		std::cin >> selection;

		system("cls");
		if (selection == 1)
		{
			bool con2 = true;

			print("Enter the Name: ");
			std::cin >> name;
			print("Enter the years: ");
			std::cin >> years;
			print("Enter the pay: ");
			std::cin >> pay;
			Employee John(name, years, pay);
			while (con2)
			{
				system("cls");
				print("Please choose from the following menu:");
				print("(1) Print current info");
				print("(2) Change current info");
				print("(3) Use GetPay Function");
				print("(4) Use getNumServiceYears function");
				print("(0) To exit this menu and go back to main menu");
				std::cin >> selection;
				if (selection == 1)
				{
					John.print();
				}
				else if (selection == 2)
				{
					print("Enter the Name: ");
					std::cin >> name;
					print("Enter the years: ");
					std::cin >> years;
					print("Enter the pay: ");
					std::cin >> pay;
					John.setData(name, years, pay);
				}
				else if (selection == 3)
				{
					double pay2;
					pay2 = John.getPay();
					print("Your Pay: ");
					std::cout << pay2 << std::endl;

				}
				else if (selection == 4)
				{
					int years2;
					years2 = John.getNumOfServiceYears();
					std::cout << "Your Service Years" << std::endl << years2 << std::endl;
				}
				else if (selection == 0)
				{
					con2 = false;
				}
				system("pause");
				system("cls");
			}
		}
		else if (selection == 2)
		{
			print("Enter the years: ");
			std::cin >> years;
			print("Enter the pay: ");
			std::cin >> pay;
			Employee John(years, pay);
			bool con2 = true;
			while (con2)
			{
				system("cls");
				print("Please choose from the following menu:");
				print("(1) Print current info");
				print("(2) Change current info");
				print("(3) Use GetPay Function");
				print("(4) Use getNumServiceYears function");
				print("(0) To exit this menu and go back to main menu");
				std::cin >> selection;
				if (selection == 1)
				{
					John.print();
				}
				else if (selection == 2)
				{
					print("Enter the Name: ");
					std::cin >> name;
					print("Enter the years: ");
					std::cin >> years;
					print("Enter the pay: ");
					std::cin >> pay;
					John.setData(name, years, pay);
				}
				else if (selection == 3)
				{
					double pay2;
					pay2 = John.getPay();
					print("Your Pay: ");
					std::cout << pay2 << std::endl;

				}
				else if (selection == 4)
				{
					int years2;
					years2 = John.getNumOfServiceYears();
					std::cout << "Your Service Years" << std::endl << years2 << std::endl;
				}
				else if (selection == 0)
				{
					con2 = false;
				}
				system("pause");
				system("cls");
			}
		}
		else if (selection == 3)
		{
			print("Enter the Name: ");
			std::cin >> name;
			Employee John(name);
			bool con2 = true;
			while (con2)
			{
				system("cls");
				print("Please choose from the following menu:");
				print("(1) Print current info");
				print("(2) Change current info");
				print("(3) Use GetPay Function");
				print("(4) Use getNumServiceYears function");
				print("(0) To exit this menu and go back to main menu");
				std::cin >> selection;
				if (selection == 1)
				{
					John.print();
				}
				else if (selection == 2)
				{
					print("Enter the Name: ");
					std::cin >> name;
					print("Enter the years: ");
					std::cin >> years;
					print("Enter the pay: ");
					std::cin >> pay;
					John.setData(name, years, pay);
				}
				else if (selection == 3)
				{
					double pay2;
					pay2 = John.getPay();
					print("Your Pay: ");
					std::cout << pay2 << std::endl;

				}
				else if (selection == 4)
				{
					int years2;
					years2 = John.getNumOfServiceYears();
					std::cout << "Your Service Years" << std::endl << years2 << std::endl;
				}
				else if (selection == 0)
				{
					con2 = false;
				}
				system("pause");
				system("cls");
			}
		}
		else if (selection == 4)
		{
			Employee John;
			bool con2 = true;
			while (con2)
			{
				system("cls");
				print("Please choose from the following menu:");
				print("(1) Print current info");
				print("(2) Change current info");
				print("(3) Use GetPay Function");
				print("(4) Use getNumServiceYears function");
				print("(0) To exit this menu and go back to main menu");
				std::cin >> selection;
				if (selection == 1)
				{
					John.print();
				}
				else if (selection == 2)
				{
					print("Enter the Name: ");
					std::cin >> name;
					print("Enter the years: ");
					std::cin >> years;
					print("Enter the pay: ");
					std::cin >> pay;
					John.setData(name, years, pay);
				}
				else if (selection == 3)
				{
					double pay2;
					pay2 = John.getPay();
					print("Your Pay: ");
					std::cout << pay2 << std::endl;

				}
				else if (selection == 4)
				{
					int years2;
					years2 = John.getNumOfServiceYears();
					std::cout << "Your Service Years" << std::endl << years2 << std::endl;
				}
				else if (selection == 0)
				{
					con2 = false;
				}
				system("pause");
				system("cls");
			}

		}
		else if (selection == 0)
		{
			condition = false;
		}
			
			
	}

	return 0;
}

void print(std::string a)
{
	std::cout << a << std::endl;
}