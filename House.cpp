#include <iostream>
#include "House.h"
#include "Flat.h"
using namespace std;

House::House()
{

	cout << "Введите адрес или именной идентификатор дома: ";
	char nameOfHouse[30];
	cin >> nameOfHouse;
	cout << "Введите количество квартир в доме: ";
	int amountOfFlats;
	cin >> amountOfFlats;
	setAmountOfFlats(amountOfFlats);
	cout << "Дом " << *nameOfHouse;
	cout << "\nНомер квартиры.\tКоличество проживающих.\n";
	for (int i = 0; i < amountOfFlats; i++)
	{
		cout << i + 1 << "\t\t\t\t" << Flat.getAmountOfResident();
	}
}

void House::setNameOfHouse(char buffer[30])
{
	strcpy_s(nameOfHouse, 30, buffer);
}

void House::setAmountOfFlats(int amount)
{
	amountOfFlats = amount;
	Flat* flat = new Flat[amount];
}