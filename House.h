#include <iostream>
#pragma once
using namespace std;

class House
{
	int amountOfFlats;
	char nameOfHouse[30];
public:
	House();

	void setNameOfHouse(char buffer[30]);
	void setAmountOfFlats(int amount);
	void getNameOfHouse()
	{
		cout << nameOfHouse;
	}
	int getAmountOfFlats()
	{
		return amountOfFlats;
	}


};

