#include <iostream>
#pragma once
using namespace std;

class Resident
{
	char nameOfResident[30];
public:
	Resident();
	void setNameOfResident(char buffer[30]);
	void getNameOfResident()
	{
		cout << nameOfResident;
	}
};

