#include <iostream>
#include "Resident.h"
using namespace std;

Resident::Resident()
{
	//cout << "Проживающий " <<   << ":\n";
	cout << "Введите имя проживающего: ";
	char nameOfResident[30];
	cin >> nameOfResident;
	setNameOfResident(nameOfResident);
}

void Resident::setNameOfResident(char buffer[30])
{
	strcpy_s(nameOfResident, 30, buffer);
}

