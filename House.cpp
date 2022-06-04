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